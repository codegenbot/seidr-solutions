import hashlib

def string_to_md5(text):
    if text and not text.isspace():
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Enter a string: ").strip()
result = string_to_md5(text)
print(result)