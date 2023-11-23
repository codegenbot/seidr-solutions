import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else ""

try:
    text = input()
    result = string_to_md5(text)
    print(result)
except EOFError:
    print("Input is empty.")