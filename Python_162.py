import hashlib


def string_to_md5(text):
    return hashlib.md5(text).hexdigest()


def main():
    while True:
        while True:
            user_input = input("Please enter a string (or 'q' to quit): ")
            text = user_input.strip().encode("utf-8") if user_input else None
            if text is None or text.decode().lower() == "q":
                break
        if text.decode().lower() == "q":
            break
        try:
            result = string_to_md5(text)
            print(result)
        except Exception as e:
            print(f"Error: {e}")


if __name__ == "__main__":
    main()