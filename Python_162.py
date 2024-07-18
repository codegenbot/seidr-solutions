import hashlib

def string_to_md5(text):
    text = text if text else ""
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ") or ""
result = string_to_md5(text)
print(result)