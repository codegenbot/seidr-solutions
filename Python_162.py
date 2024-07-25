import hashlib

def string_to_md5():
    text = input("Enter a string to generate MD5 hash: ").strip()
    return hashlib.md5(text.encode()).hexdigest()