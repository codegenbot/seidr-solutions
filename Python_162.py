```
import hashlib

def string_to_md5():
    text = input("Please enter a string: ")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())