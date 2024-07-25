import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter text: ")
if len(text) < 1:
    raise ValueError("Input text must contain at least one character")

result = string_to_md5(text)
print(result)