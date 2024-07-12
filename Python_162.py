import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = input("Enter a string: ")
if not text:
    print("Input string cannot be empty.")
else:
    print(string_to_md5(text))