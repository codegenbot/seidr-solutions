import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input("Enter the text: ")

# Call the function with the input
result = string_to_md5(text)

# Print the result
print(result)