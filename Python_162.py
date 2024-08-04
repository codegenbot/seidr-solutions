import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = "Your hardcoded string here"
result = string_to_md5(text)
print(result)