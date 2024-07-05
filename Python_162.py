import hashlib

def string_to_md5(text):
    if text is None or text == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    try:
        user_input = input().strip()
    except EOFError:
        user_input = ""  # If input is not provided, set it to an empty string
    result = string_to_md5(user_input)
    print(result if result else "None")