import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

text = "example_text_to_hash" # or any text string you want to hash
md5_hash = string_to_md5(text)
print("MD5 Hash:", md5_hash)