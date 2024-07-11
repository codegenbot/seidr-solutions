```
import hashlib

def string_to_md5():
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter some text: ")
print(string_to_md5())