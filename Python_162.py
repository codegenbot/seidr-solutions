```
import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


if __name__ == "__main__":
    while True:
        try:
            user_input = input("Enter a string: ")
            print(string_to_md5(user_input))
            break
        except Exception as e:
            print(f"Error occurred: {e}")