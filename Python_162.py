import sys
import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = sys.stdin.readline().rstrip()
if len(text) < 1:
    raise ValueError("Input text must contain at least one character")

result = string_to_md5(text)
print(result)