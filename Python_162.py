import sys
import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

if len(sys.argv) < 2:
    print("No input provided")
else:
    user_input = sys.argv[1]
    result = string_to_md5(user_input)
    print("MD5 hash of the input string is:", result)