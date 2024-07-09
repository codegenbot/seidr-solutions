import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Read input from the user
text = input("Enter the text to convert to MD5 hash: ")

# Call the function and print the result
print(string_to_md5(text))