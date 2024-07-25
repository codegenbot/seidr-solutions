import hashlib

def string_to_md5(text):
    return hashlib.md5(str(text).encode()).hexdigest() if text else None

text = input().strip()
md5_hash = string_to_md5(text)
print(md5_hash)