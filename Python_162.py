import hashlib

def string_to_md5(text):
    text = text.strip()
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input().strip()
result = string_to_md5(text)
print(result)