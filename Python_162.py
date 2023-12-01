import hashlib

def string_to_md5():
    text = input().strip()
    return hashlib.md5(text.encode()).hexdigest().strip()

print(string_to_md5())