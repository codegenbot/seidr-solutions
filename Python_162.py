import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


input_text = input("Enter text to calculate MD5 hash: ")
md5_hash = string_to_md5(input_text)
print(md5_hash)