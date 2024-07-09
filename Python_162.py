import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from user
input_text = input("Enter a string to convert to MD5: ")
print(string_to_md5(input_text))