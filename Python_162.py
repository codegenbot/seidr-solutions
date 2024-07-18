import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

result = string_to_md5(input("Enter a string: "))
print(result)