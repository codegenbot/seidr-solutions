import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Test the function with some text input
print(string_to_md5("Hello World"))