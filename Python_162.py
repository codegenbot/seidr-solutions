import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = input("Enter text to get MD5 hash: ")
print("MD5 hash:", string_to_md5(text))