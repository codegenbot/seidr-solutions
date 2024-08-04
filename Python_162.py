import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.strip().encode()).hexdigest()

text = input().strip()
result = string_to_md5(text)
print(result)