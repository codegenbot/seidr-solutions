```
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Get user input
user_input = input("Enter a string: ")

# Pass the user input to your function
print(string_to_md5(user_input))