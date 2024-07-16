import hashlib

def string_to_md5(text):
    text = text.strip()
    return hashlib.md5(text.encode()).hexdigest() if text else None

input_text = input("Enter a string: ")
result = string_to_md5(input_text)
print(result) if result else print("Invalid input")