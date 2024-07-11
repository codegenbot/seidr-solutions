````
import hashlib

def string_to_md5():
    for _ in range(3):
        while True:
            try:
                text = input("Enter some text: ")
                if text.isprintable():  
                    return hashlib.md5(text.encode('utf-8')).hexdigest()
                else:
                    print("Invalid input. Please enter printable characters.")
            except AttributeError:
                print("Error: Please enter a string.")
    print("No valid input received after 3 attempts. Program terminated.")

result = string_to_md5()
print(result)
```