import hashlib

def string_to_md5():
    try:
        text = input().strip()
        return hashlib.md5(text.encode()).hexdigest()
    except ValueError:
        return None

print(string_to_md5())