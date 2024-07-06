```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def is_valid_md5(md5):
    if not md5:
        return False
    try:
        int_md5 = int(md5, 16)
        expected_hash = string_to_md5(input("Enter a text: "))
        return expected_hash == md5
    except ValueError:
        return False