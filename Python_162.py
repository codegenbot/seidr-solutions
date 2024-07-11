```
import hashlib

def string_to_md5():
    while True:
        text = input("Please enter some text: ")
        if text:
            return hashlib.md5(text.encode()).hexdigest()
            break
        else:
            print("Input cannot be empty! Please try again.")