import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


# Read input from user
text = input("Enter a string: ")

# Calculate and print the MD5 hash
print(string_to_md5(text))