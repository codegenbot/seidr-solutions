import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

text = input("Enter the string to convert to MD5 hash: ").strip()
result = string_to_md5(text)
print(result)