import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

# Read input from the user
text = input("Enter the text to generate MD5 hash: ")

# Call the function with the input and print the output
print(string_to_md5(text))