import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    text = input("Enter a string: ")
    while True:
        if text.strip() == "":
            print("Please enter a valid input.")
        elif not text.isalnum():
            print("Invalid input. Please enter alphanumeric characters only.")
        else:
            break
    result = string_to_md5(text.lower())
    print(result)