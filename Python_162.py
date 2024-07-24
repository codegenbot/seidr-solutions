import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

text = input("Enter a string: ")
result = string_to_md5(text)
print(result)