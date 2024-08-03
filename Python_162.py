import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter text to convert to MD5 hash: ")
print(string_to_md5(text))