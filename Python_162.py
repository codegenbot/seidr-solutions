import hashlib

def string_to_md5(text):
    if isinstance(text, str):
        return hashlib.md5(text.encode()).hexdigest()
    return None

text = input().strip()
md5_hash = string_to_md5(text)
if md5_hash:
    print(md5_hash)
else:
    print("Error: Unable to generate MD5 hash")