```
import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    try:
        text = input("Enter a string: ")
        print(string_to_md5(text))
    except TypeError:
        print("Invalid input. Please enter a string.")