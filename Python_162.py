import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

text = input().strip() if input() else None
result = string_to_md5(text)
print(result)