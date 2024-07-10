import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    return None

user_input = input("Enter a string to generate MD5 hash: ").rstrip()
result = string_to_md5(user_input)
print(f"MD5 hash of the input string is: {result}")