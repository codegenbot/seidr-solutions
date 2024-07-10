import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

user_input = input("Enter a string to generate MD5 hash: ").rstrip()
if user_input:
    result = string_to_md5(user_input)
    print("MD5 hash of the input string is:", result)
else:
    print("No input provided")