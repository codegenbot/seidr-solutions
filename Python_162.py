import hashlib


def main():
    text = input("Enter a string: ")
    if not text:
        print(None)
    else:
        print(hashlib.md5(text.encode()).hexdigest())


if __name__ == "__main__":
    main()