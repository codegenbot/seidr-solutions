import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5(input().strip()))