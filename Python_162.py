import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()

try:
    text = input("Enter a string: ")
    if text.strip():
        print(string_to_md5(text))
    else:
        print("Please provide a string.")
except EOFError:
    print("No input provided.")