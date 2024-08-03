import sys
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = sys.stdin.readline().strip()
if text:
    result = string_to_md5(text)
    print(result)
else:
    print("Input string is empty.")