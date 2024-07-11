import hashlib

def string_to_md5(text):
    if isinstance(text, str):
        return hashlib.md5(text.encode()).hexdigest()
    return None

text = input("Enter a valid input string (visible ASCII characters only): ").strip()
if all(32 <= ord(char) <= 127 for char in text):
    md5_hash = string_to_md5(text)
    if md5_hash:
        print("MD5 Hash:", md5_hash)
    else:
        print("Error: Unable to generate MD5 hash")
else:
    print("Error: Input should contain only visible ASCII characters")