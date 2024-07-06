```
import hashlib

def string_to_md5():
    text = input("Please enter a string: ")
    if not text:
        print("Input cannot be empty.")
        return
    return hashlib.md5(text.encode()).hexdigest()