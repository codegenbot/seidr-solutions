import hashlib

def string_to_md5():
    text = input()
    return hashlib.md5(text.encode()).hexdigest() if text else None

print(string_to_md5())