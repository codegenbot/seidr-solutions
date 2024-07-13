import hashlib


def string_to_md5():
    text = input("Enter a string: ")
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except TypeError as e:
        print(f"Error: {e}. Please enter a valid string.")
        return None


if __name__ == "__main__":
    print(string_to_md5())