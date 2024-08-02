import hashlib


def string_to_md5(text):
    if text == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()


# Get input from user
text = input("Enter a string: ")

# Call the function with user input
result = string_to_md5(text)
print(result)