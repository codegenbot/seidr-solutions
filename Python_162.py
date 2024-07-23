import hashlib


def string_to_md5():
    text = input() or ""
    return hashlib.md5(text.encode()).hexdigest()