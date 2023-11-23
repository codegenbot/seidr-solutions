import hashlib
import sys

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

text = sys.stdin.read()
result = string_to_md5(text.strip())
print(result)