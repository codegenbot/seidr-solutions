import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text).hexdigest()


text = input("Please enter a string: ").encode()
print(string_to_md5(text))