import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

try:
    input_text = input("Enter a string: ").strip()
    if not input_text:
        print("Invalid input")
    else:
        result = string_to_md5(input_text)
        print(result)
except KeyboardInterrupt:
    pass