import hashlib

def string_to_md5():
    text = input().strip()
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    return None