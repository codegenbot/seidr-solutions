import hashlib

def string_to_md5(text):
    if not text:
        return None
    user_input = input("Enter a string: ")
    return hashlib.md5(user_input.encode()).hexdigest()