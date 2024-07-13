import hashlib


def string_to_md5():
    text = input("Enter a string: ")
    if not text.isalnum():
        print("Invalid input. Please enter only alphanumeric characters.")
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    while True:
        response = input("Press Enter to calculate MD5 hash, type 'exit' to quit: ")
        if response.lower() == "exit":
            break
        result = string_to_md5()
        if result is not None:
            print(result)