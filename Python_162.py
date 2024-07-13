```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter a string: ")
        if not text.isalnum(): 
            print("Invalid input. Please enter only alphanumeric characters.")
        else:
            break
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    print(string_to_md5())