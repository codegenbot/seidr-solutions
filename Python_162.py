import hashlib

def string_to_md5(input_str):
    return hashlib.md5(input_str.encode()).hexdigest()