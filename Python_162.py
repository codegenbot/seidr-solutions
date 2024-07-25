import hashlib

def string_to_md5():
    text = input("Enter the text to compute MD5 hash: ")
    return hashlib.md5(text.encode()).hexdigest()