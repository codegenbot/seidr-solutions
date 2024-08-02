import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Take user input
user_input = input("Enter a string: ")

# Call the function with user input
result = string_to_md5(user_input)

# Print the result
print(result)