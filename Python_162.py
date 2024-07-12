```Python
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Read user input
user_input = input("Enter a string: ")

# Call the function with the input and print the result
print(string_to_md5(user_input))