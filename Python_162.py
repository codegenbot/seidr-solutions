import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from user
user_input = input("Enter a string to convert to MD5: ")
result = string_to_md5(user_input)
print(result)