import hashlib

text = input()


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()