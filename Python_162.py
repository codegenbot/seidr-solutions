import hashlib

def string_to_md5(text):
    if not text:
        return None
    md5 = hashlib.md5()
    md5.update(text.encode())
    return md5.hexdigest()