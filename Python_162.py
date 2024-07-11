import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = input("Enter text to hash: ").strip() if __name__ == '__main__' else None
if text:
    md5_hash = string_to_md5(text)
    print("MD5 Hash:", md5_hash)