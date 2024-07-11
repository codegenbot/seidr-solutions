import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if isinstance(text, str) else None

try:
    text = input("Enter text to hash: ").strip()
    md5_hash = string_to_md5(text)
    if md5_hash is not None:
        print("MD5 Hash:", md5_hash)
    else:
        print("Error: Unable to generate MD5 hash for the input text")
except KeyboardInterrupt:
    print("Error: Program did not receive expected input")