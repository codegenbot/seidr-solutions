import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = sys.stdin.readline().rstrip()
result = string_to_md5(text)
print(result)