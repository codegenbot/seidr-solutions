import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

# Prompt the user to enter text
text = input("Enter text to generate MD5 hash: ").strip()
# Call the function with the input
result = string_to_md5(text)
# Print the result
print(result)