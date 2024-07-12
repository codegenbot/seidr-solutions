import hashlib

def string_to_md5(text):
    if not text:
        return "Input text is empty"
    return hashlib.md5(text.encode()).hexdigest()