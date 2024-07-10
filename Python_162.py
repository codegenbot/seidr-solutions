import hashlib
import sys

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

if __name__ == "__main__":
    user_input = sys.stdin.readline().strip()
    result = string_to_md5(user_input)
    print("MD5 hash of the input string is:", result)