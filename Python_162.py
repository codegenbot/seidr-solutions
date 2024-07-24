import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

try:
    text = input("Enter the string to convert to MD5 hash: ").strip() or "default"
except:
    text = "default"

result = string_to_md5(text)
print(result)