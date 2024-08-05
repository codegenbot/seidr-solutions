import hashlib

def string_to_md5(text):
    if text is None or len(text) == 0:
        return None
    return hashlib.md5(text.encode()).hexdigest()