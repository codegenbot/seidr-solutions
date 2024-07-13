import hashlib


def string_to_md5():
    text = input("Enter a string: ")
    if not text:
        return None
    print(hashlib.md5(text.encode()).hexdigest())


if __name__ == "__main__":
    string_to_md5()