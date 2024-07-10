import hashlib

def string_to_md5():
    text = input("Please enter a string: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None