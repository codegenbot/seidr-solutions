import hashlib

def string_to_md5(text):
    if len(text) == 0:
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()