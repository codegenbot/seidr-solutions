import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""

try:
    text = input().strip()
except EOFError:
    text = ""

result = string_to_md5(text)

print(result)