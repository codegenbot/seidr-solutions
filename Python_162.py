import hashlib

def string_to_md5():
    text = input("Enter the string to convert to MD5 hash: ")
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()