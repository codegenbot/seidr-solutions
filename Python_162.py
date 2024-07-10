import sys
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    return None

if __name__ == "__main__":
    for user_input in sys.stdin:
        result = string_to_md5(user_input.strip())
        print("MD5 hash of the input string is:", result)