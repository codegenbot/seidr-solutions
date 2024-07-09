```
import hashlib

def string_to_md5():
    text = input("Please enter some text: ")
    return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())