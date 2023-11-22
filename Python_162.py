import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = ""  # replace with the desired input string
result = string_to_md5(text)
print("MD5 hash:", result)