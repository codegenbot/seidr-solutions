import sys
import hashlib

def string_to_md5(text):
    return hashlib.md5(text.strip().encode()).hexdigest()

input_text = sys.stdin.read().strip()
result = string_to_md5(input_text)
print(result)