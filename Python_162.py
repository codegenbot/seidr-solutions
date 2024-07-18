import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.strip().encode()).hexdigest() if text.strip() else None

text = sys.stdin.readline().strip()
result = string_to_md5(text)
print(result)