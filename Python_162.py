import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

input_text = input().strip()
result = string_to_md5(input_text)
print(result)