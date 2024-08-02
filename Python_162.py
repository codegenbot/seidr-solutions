import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter the text: ")
result = string_to_md5(text)
print("MD5 hash of the text:", result)