import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Prompt the user to enter the input
text = input("Enter the text: ")

# Call the function with the user-provided input
result = string_to_md5(text)

# Print the result
print(result)