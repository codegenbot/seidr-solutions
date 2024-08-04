import hashlib

def string_to_md5(text):
    if text == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from the user
text = input("Enter text to get its MD5 hash: ")

# Call the function with the input
result = string_to_md5(text)

print(result)