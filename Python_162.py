import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = sys.argv[1]
result = string_to_md5(text)
print(result)