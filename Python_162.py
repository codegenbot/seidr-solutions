import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

result = string_to_md5(input('Enter text to convert to MD5: ').strip())
print(result)