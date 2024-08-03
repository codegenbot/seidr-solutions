import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = sys.stdin.readline().rstrip()
print(string_to_md5(text))