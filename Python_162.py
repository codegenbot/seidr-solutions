import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text.strip() and isinstance(text, str) else None

input_text = str(input("Enter a string: ")).strip()
result = string_to_md5(input_text)
print(result)