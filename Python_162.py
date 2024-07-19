import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    input_text = input("Enter the text to hash: ").strip()
    if input_text:
        result = string_to_md5(input_text)
        print(result)
    else:
        print("Input text is empty.")
except (EOFError, KeyboardInterrupt):
    pass