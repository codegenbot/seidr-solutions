import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

try:
    print(string_to_md5(input("Please enter a string: ")))
except EOFError:
    print("No input provided.")