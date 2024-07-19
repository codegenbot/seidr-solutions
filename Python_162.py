import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Enter text: ")
md5_hash = string_to_md5(text)
print(md5_hash)