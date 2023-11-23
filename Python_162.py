import hashlib

def string_to_md5():
    text = input("Enter the text to be hashed: ")
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()