import hashlib


def string_to_md5():
    text = input("Enter a string: ")
    while not text.isalnum() or len(text) == 0:
        if len(text) == 0:
            print("Please enter a non-empty string.")
        else:
            print("Invalid input. Please enter only alphanumeric characters.")
        text = input("Try again: ")
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    while True:
        input("Press Enter when ready: ")
        result = string_to_md5()
        if result is not None:
            print(result)