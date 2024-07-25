import hashlib


def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None


text = input("Enter a string: ").strip()
md5_hash = string_to_md5(text)
print(md5_hash)