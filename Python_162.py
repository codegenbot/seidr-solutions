```
import hashlib

def string_to_md5():
    while True:
        try:
            user_input = input("Enter some text: ")
            if not isinstance(user_input, str):
                print("Error: Please enter a string.")
            else:
                text = user_input
                if text.isprintable():  
                    return hashlib.md5(text.encode('utf-8')).hexdigest()
                else:
                    print("Invalid input. Please enter printable characters.")
        except AttributeError:
            print("Error: Please enter a string.")

result = string_to_md5()
print(result)