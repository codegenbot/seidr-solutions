import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Read input from the user
text = input()

# Call the function and print the output
print(string_to_md5(text))