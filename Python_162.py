import hashlib

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input("Enter text: ")
# Call function and print result
print(string_to_md5(text))