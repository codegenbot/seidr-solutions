```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter a string: ")
    while True:
        if text:
            print(string_to_md5(text))
            break
        else:
            print("Invalid input. Please enter a string.")
            text = input("Enter a string: ")