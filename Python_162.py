```
import hashlib
import sys

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        try:
            text = input("Enter a string: ").lower()
            result = string_to_md5(text)
            print(result)
            break
        except Exception as e:
            print(f"Error: {e}")
            print("Please enter a valid string. Try again!")