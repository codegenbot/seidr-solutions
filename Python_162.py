import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter text to generate MD5 hash: ")
print(string_to_md5(text))