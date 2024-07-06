import hashlib


def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()


def main():
    while True:
        text = input("Please enter a string (or 'q' to quit): ")
        if text.lower() == "q":
            break
        try:
            result = string_to_md5(text)
            print(result)
        except Exception as e:
            print(f"Error: {e}")


if __name__ == "__main__":
    main()