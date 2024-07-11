import hashlib


def string_to_md5():
    text = input("Please enter some text: ")
    if text:
        md5_hash = hashlib.md5(text.encode()).hexdigest()
        return md5_hash
    else:
        return None