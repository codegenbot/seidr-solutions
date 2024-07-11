import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

text = input("Enter the text to hash: ")
md5_hash = string_to_md5(text)
print("MD5 Hash:", md5_hash)