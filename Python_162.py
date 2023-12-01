import hashlib


def string_to_md5():
    while True:
        text = input().strip()
        if text == "":
            break
        else:
            print(hashlib.md5(text.encode()).hexdigest())