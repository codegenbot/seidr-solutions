import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

try:
    text = input("Enter a string: ").strip()
except EOFError:
    text = ''

result = string_to_md5(text)
print(result)