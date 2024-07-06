```
import hashlib

def string_to_md5():
    text = input("Enter a string: ")
    if not text:
        print("Please enter some text.")
        return string_to_md5()
    return hashlib.md5(text.encode()).hexdigest()