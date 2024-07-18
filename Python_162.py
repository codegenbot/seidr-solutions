import hashlib

def string_to_md5(text):
    return hashlib.md5(text.strip().encode()).hexdigest() if text.strip() else None

text = input().strip()
result = string_to_md5(text)
print(result)