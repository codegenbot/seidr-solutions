import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

user_input = input("Enter a string to generate MD5 hash: ")
if not user_input:
    print("No input provided")
else:
    result = string_to_md5(user_input)
    print("MD5 hash of the input string is:", result)