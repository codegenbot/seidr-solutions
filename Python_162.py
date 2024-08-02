import hashlib


def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Read input from user
text = input("Enter the text to be converted to MD5: ")
print(string_to_md5(text))