```
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

if __name__ == "__main__":
    user_text = input("Please enter a string: ")
    print(string_to_md5(user_text))