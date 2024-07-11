import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode('utf-8')).hexdigest()

text = input("Enter a string: ")
print(string_to_md5(text) or "No input")