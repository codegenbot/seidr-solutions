import hashlib


def string_to_md5():
    if not text := input():
        return None
    return hashlib.md5(text.encode()).hexdigest()