import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""

text = input("Enter a string to convert to MD5: ")

result = string_to_md5(text)

print(result)