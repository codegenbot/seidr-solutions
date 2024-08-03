import hashlib
import sys

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if len(sys.argv) > 1:
    text = sys.argv[1]
    result = string_to_md5(text)
    print(result)
else:
    print("Input string is empty.")