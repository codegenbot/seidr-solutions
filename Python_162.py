import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = sys.stdin.read().strip()
    if text:
        result = string_to_md5(text)
        print(result)
    else:
        print("No input received.")