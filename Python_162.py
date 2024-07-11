```
import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


while True:
    try:
        text = input("Please enter a string: ")
        if not text.strip():
            print("Invalid input. Please try again.")
        else:
            break
    except Exception as e:
        print(f"Unexpected error occurred: {str(e)}")

print(string_to_md5(text))