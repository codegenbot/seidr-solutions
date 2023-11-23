import hashlib

def string_to_md5(text):
    if text == '':
        return None
    else:
        md5_hash = hashlib.md5(text.encode())
        return md5_hash.hexdigest()