```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter a string: ")
try:
    result = string_to_md5(text)
except Exception as e:
    print(f"Error: {e}")
else:
    print(result)