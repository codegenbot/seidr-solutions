import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Please provide a string: ")
if text.strip():
    print(string_to_md5(text))
else:
    print("Please provide a non-empty string.")