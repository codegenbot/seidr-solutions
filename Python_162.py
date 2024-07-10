import hashlib


def string_to_md5():
    while True:
        text = input("Enter some text: ")
        if text.strip():
            break
    if not text:
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())