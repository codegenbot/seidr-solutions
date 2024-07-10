import hashlib

def string_to_md5():
    text = input("Enter a string: ")
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()