import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")

print("MD5 Hash:", string_to_md5(text))