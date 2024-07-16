import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text and text.strip() else None

input_text = input("Enter a string: ")
if input_text.strip():
    result = string_to_md5(input_text)
    print(result)
else:
    print("Invalid input")