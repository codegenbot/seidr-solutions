import hashlib

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from user
input_text = input("Enter a string: ")

# Call the function with input text
result = string_to_md5(input_text)

# Print the result
print(result)