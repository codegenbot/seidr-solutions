```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter the text: ")
        if not text:
            print("Input cannot be empty! Try again.")
        else:
            return hashlib.md5(text.encode()).hexdigest()