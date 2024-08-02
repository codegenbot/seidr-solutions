import hashlib


def main():
    text = input("Please enter some text: ")
    print(string_to_md5(text))


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    main()