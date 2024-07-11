```
import hashlib

def string_to_md5():
    text = input("Please enter some text: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

if __name__ == "__main__":
    print(string_to_md5())