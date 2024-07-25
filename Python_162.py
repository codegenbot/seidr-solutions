import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Get user input
user_input = input("Enter a string to convert to MD5: ")

# Print MD5 hash
print(string_to_md5(user_input))