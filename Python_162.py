import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else ""

result = string_to_md5(input(""))
print(result)