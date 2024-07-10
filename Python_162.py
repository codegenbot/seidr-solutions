import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.strip().encode()).hexdigest()
    return None

try:
    user_input = input("Enter a string to generate its MD5 hash: ")
except EOFError:
    print("No input provided")
else:
    if user_input:
        result = string_to_md5(user_input)
        print("MD5 hash of the input string is:", result)