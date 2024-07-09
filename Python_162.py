import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")
if text:
    print(string_to_md5(text))
else:
    print("Please provide a string.")