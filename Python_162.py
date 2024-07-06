```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

while True:
    try:
        text = input("Please enter a string: ")
        result = string_to_md5(text)
        print(result)
        break
    except Exception as e:
        print(f"Invalid input. Please enter a valid string.{e}")