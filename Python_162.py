import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input("Enter the text: ")

# Call the function and print the result
print(string_to_md5(text))