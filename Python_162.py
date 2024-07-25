import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a non-empty text: ").strip()
if text == "":
    raise ValueError("Input text cannot be empty")

result = string_to_md5(text)
print(result)