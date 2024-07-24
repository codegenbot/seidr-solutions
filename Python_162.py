import hashlib

def string_to_md5(text):
    text = input("Enter a string: ")
    return hashlib.md5(text.encode()).hexdigest() if text else None