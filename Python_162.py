import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text is not None else None

input_text = input("Enter the text: ")
result = string_to_md5(input_text)
print(result)