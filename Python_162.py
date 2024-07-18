import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Example
input_text = "Hello, World!"
print(string_to_md5(input_text))