import sys
import hashlib

def string_to_md5(text):
    if isinstance(text, str):
        return hashlib.md5(text.encode()).hexdigest()
    return None

if len(sys.argv) == 2:
    text = sys.argv[1].strip()
    if all(32 <= ord(char) <= 126 and char.isprintable() for char in text):
        md5_hash = string_to_md5(text)
        if md5_hash:
            print("MD5 Hash:", md5_hash)
        else:
            print("Error: Unable to generate MD5 hash")
    else:
        print("Error: Input should contain only visible ASCII characters")
else:
    print("Error: Expected input string as command-line argument")