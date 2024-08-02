import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Read input from user
text = input("Enter a string: ")
# Call the function with user input and print the result
print(string_to_md5(text))