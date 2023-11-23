import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""

text = ""
for line in sys.stdin:
    text += line.strip() + "\n"

result = string_to_md5(text)

print(result)