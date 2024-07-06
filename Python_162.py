import hashlib


def string_to_md5():
    text = input("Enter a string: ")
    if not text:
        print("Please enter a valid string.")
    else:
        print(hashlib.md5(text.encode()).hexdigest())