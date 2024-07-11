```
import hashlib


def string_to_md5(text):
    if not text:
        return None
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        print(f"An error occurred: {e}")
        return None


text = input("Please enter a string: ")
print(string_to_md5(text))