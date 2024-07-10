import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    return None

user_input = input("Please enter a string: ").strip()
if user_input:
    result = string_to_md5(user_input)
    print("MD5 hash of the input string is:", result)
else:
    print("No input provided")