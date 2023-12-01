import hashlib

def string_to_md5():
    text = input("Enter the text you want to convert to MD5: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None