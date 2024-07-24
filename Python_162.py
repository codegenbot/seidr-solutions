import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Read input from user
text = input("Enter a string: ")
# Call the function with the input
result = string_to_md5(text)
# Print the result
print(result)