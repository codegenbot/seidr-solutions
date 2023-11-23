import hashlib

def string_to_md5(text):
    if text == '':
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")
md5_hash = string_to_md5(text)
print("MD5 Hash:", md5_hash)