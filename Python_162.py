import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

for text in iter(input, ''):
    result = string_to_md5(text)
    print(result)