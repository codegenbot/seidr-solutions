import hashlib

def string_to_md5(text):
    if not text:
        return None
    encoded_text = text.encode()
    return hashlib.md5(encoded_text).hexdigest()