import hashlib


def string_to_md5(text):
    if not isinstance(text, str):
        return "Invalid input"
    try:
        if not text:
            return None
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        return f"Error: {str(e)}"


if __name__ == "__main__":
    user_input = input("Enter a string: ")
    print(string_to_md5(user_input))