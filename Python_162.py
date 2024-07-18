import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

try:
    text = input("Enter a string: ").strip()
    while not text:
        text = input("Please enter a non-empty string: ").strip()

    result = string_to_md5(text)
    print(result)
except EOFError:
    print("No input provided.")