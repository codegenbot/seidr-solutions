```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter the text (or 'quit' to exit): ")
        if text.lower() == 'quit':
            return None
        if not text:
            print("Please enter some text.")
        else:
            return hashlib.md5(text.encode()).hexdigest()