```
import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    while True:
        user_input = input("Enter a string (or 'q' to quit): ")
        if user_input.lower() == "q":
            break
        try:
            print(f"MD5 of '{user_input.encode()}' : {string_to_md5(user_input.encode())}")
        except Exception as e:
            print(f"Error: {e}")