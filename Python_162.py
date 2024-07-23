import hashlib

def string_to_md5(text):
    if not text:
        return None
    if not text.isalpha():
        print("Error: Only alphabets are allowed.")
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")
print(string_to_md5(text))