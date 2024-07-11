import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None and isinstance(text, str) else None

try:
    text = input("Enter text to hash: ").strip()
    md5_hash = string_to_md5(text)
    print("MD5 Hash:", md5_hash)
except ValueError:
    print("Error: Program did not receive expected input")