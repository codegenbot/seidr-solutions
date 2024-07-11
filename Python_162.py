```
import hashlib


def string_to_md5(text):
    if not text:
        return None
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        print(f"Error: {e}")
        return None


text = input("Please enter a string: ")
while text.strip() == "":
    print("Invalid input. Please try again.")
    text = input("Please enter a string: ")

print(string_to_md5(text))