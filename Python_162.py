import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Call the function with user input
user_input = input("Enter a string to convert to MD5: ")
result = string_to_md5(user_input)
print(result)