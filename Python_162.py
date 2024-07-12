import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from the user
text = input("Enter text to convert to MD5: ")

# Call the function with user input
result = string_to_md5(text)

# Print the MD5 hash
print(result)