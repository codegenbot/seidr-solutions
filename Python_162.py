import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_text = input("Enter text: ")
md5_hash = string_to_md5(input_text)
print(md5_hash)