```
import hashlib

def string_to_md5():
    while True:
        text = input("Please enter a string: ")
        if text: 
            return hashlib.md5(text.encode()).hexdigest()