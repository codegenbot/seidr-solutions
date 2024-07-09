import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text_input = input("Enter a string: ")
md5_hash = string_to_md5(text_input)
print(md5_hash)