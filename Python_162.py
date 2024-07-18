import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = input("Please enter a string: ").rstrip()
result = string_to_md5(text)
print(result)