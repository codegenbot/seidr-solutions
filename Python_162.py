import hashlib

def string_to_md5(text):
    return hashlib.md5(text.strip().encode()).hexdigest()

try:
    input_text = input("Enter the text to hash: ").strip()
    result = string_to_md5(input_text)
    print(result)
except (EOFError, KeyboardInterrupt):
    pass