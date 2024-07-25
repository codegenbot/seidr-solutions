```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    try:
        int_text = int(text)
        md5_hash = hashlib.md5(str(int_text).encode()).hexdigest()
        return md5_hash
    except ValueError:
        return "Invalid input. Please enter an integer."