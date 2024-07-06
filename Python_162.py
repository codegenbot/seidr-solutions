import hashlib


def string_to_md5():
    text = input("Please enter a string: ")
    if not text:
        print("Invalid input. Please provide a valid string.")
    else:
        return hashlib.md5(text.encode()).hexdigest()