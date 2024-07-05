import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input().strip()
if text:
    result = string_to_md5(text)
    print(result)
else:
    print("No input received.")