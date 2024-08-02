import hashlib


def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Read input from user
input_text = input("Enter a string: ")
# Call the function with user input
result = string_to_md5(input_text)
# Print the result
print("MD5 Hash:", result)