import hashlib

def string_to_md5():
    text = input("Enter text: ").strip()
    return hashlib.md5(text.encode()).hexdigest()