import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""

text = sys.argv[1].strip()

result = string_to_md5(text)

print(result)