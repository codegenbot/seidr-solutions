import hashlib

def string_to_md5(text):
    if text is not None and text != "":
        return hashlib.md5(text.encode()).hexdigest()
    return None