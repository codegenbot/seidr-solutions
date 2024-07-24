import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

# Prompt the user to enter text input
text = input("Enter text to convert to MD5: ")
# Call the function with the input
result = string_to_md5(text)
# Print the result
print(result)