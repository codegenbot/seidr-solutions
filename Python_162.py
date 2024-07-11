import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

print("Enter text to convert to MD5:")
text = input().strip()
result = string_to_md5(text)
print(result)