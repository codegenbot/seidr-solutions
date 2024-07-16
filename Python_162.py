import hashlib

def string_to_md5(text):
    if not text:
        return "Invalid input"
    return hashlib.md5(text.encode()).hexdigest()

try:
    while True:
        input_text = input("Enter a string: ").strip()
        result = string_to_md5(input_text)
        print(result)
except (EOFError, KeyboardInterrupt):
    pass