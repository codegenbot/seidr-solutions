import sys
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.strip().encode()).hexdigest()
    return None

user_input = sys.stdin.readline().rstrip()
if user_input:
    result = string_to_md5(user_input)
    print("MD5 hash of the input string is:", result)
else:
    print("No input provided")