```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        text = input("Enter a string: ").lower()
        if text:
            result = string_to_md5(text)
            print(result)
            break