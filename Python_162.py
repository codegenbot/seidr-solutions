import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = "Your text here"  # Replace "Your text here" with your desired input text
result = string_to_md5(text)
print(result)