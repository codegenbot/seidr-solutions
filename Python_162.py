import hashlib


def string_to_md5():
    text = input("Enter your text: ")
    if text:
        md5_hash = hashlib.md5(text.encode()).hexdigest()
        print(md5_hash)
    else:
        return None