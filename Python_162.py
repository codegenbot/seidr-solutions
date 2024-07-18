import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = "".join(input().split()).strip()
result = string_to_md5(text)
print(result)