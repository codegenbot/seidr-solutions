import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    input_text = sys.stdin.read().strip()
    if input_text:
        result = string_to_md5(input_text)
        print(result)
    else:
        print("No input received.")