import hashlib
import sys

def string_to_md5(text):
    if text == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = sys.stdin.readline().strip()
print(string_to_md5(text))