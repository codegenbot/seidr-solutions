import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    text = input().strip()
    if text == "":
        raise ValueError("Input was empty")
    print(string_to_md5(text))
except ValueError as e:
    print(e)