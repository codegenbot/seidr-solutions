import hashlib
import sys

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    user_input = sys.stdin.read().strip()
    print(string_to_md5(user_input))