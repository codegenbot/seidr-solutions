```
import hashlib

def string_to_md5():
    while True:
        text = input("Please enter some text: ")
        if isinstance(text, str):
            return hashlib.md5(text.encode()).hexdigest()
        else:
            print("Invalid input. Please enter a valid string.")