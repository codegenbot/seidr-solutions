```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

try:
    text = input("Enter a string: ")
    print(string_to_md5(text))
except Exception as e:
    print(f"An error occurred: {e}")