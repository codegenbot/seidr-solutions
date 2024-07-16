import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text and isinstance(text, str) else None

input_text = input("Enter a string: ")
if input_text is not None:
    result = string_to_md5(input_text)
    print(result)
else:
    print("Invalid input")