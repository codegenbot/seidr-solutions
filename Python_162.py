import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter the text to generate MD5 hash: ").strip()
print(string_to_md5(text))