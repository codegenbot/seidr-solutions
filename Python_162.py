import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_text = sys.stdin.readline().strip()
result = string_to_md5(input_text)
print(result)