```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        return "Error: Invalid input. Please provide a valid string."