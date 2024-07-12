import hashlib

def string_to_md5(text):
    return None if text == "" else hashlib.md5(text.encode()).hexdigest()

text = input()
result = string_to_md5(text)
print(result)