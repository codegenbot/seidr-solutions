import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Read input from user
user_input = input("Enter text to convert to MD5 hash: ")

# Call function with user input
result = string_to_md5(user_input)

# Print the result
print(result)