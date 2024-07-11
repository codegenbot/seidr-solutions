import hashlib

def string_to_md5(text):
    if not text:
        return None
    md5_hash = string_to_md5(input("Enter a text: "))
    return hashlib.md5(text.encode()).hexdigest()