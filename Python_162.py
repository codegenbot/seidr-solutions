import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")
while not text.strip():
    text = input("Please provide a string: ")

print(string_to_md5(text))