```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode('utf-8')).hexdigest()

while True:
    try:
        text = input("Enter a string: ")
        print(string_to_md5(text))
        break
    except ValueError:
        print("Invalid input. Please enter a string.")