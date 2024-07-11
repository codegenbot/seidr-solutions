import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")
result = string_to_md5(text)
print("The MD5 hash of the given string is: ", result)