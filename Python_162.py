import hashlib

def string_to_md5():
    try:
        text = input()
        return hashlib.md5(text.encode()).hexdigest()
    except:
        return None

print(string_to_md5())