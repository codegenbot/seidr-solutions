import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

# Read input from user
text = input("Enter a string: ")

# Print MD5 hash of the input string
print(string_to_md5(text))