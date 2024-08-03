```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    input_text = input("Enter text: ").lower()
    return hashlib.md5(input_text.encode()).hexdigest()