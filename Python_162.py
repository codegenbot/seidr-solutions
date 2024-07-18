import hashlib

def string_to_md5(text: str) -> str:
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = input().strip()
result = string_to_md5(text)
print(result)