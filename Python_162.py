import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else ""

text = input("Enter a string: ") or ""
result = string_to_md5(text)
print(result)