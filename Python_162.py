import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

try:
    input_str = input("Enter a string: ")
except EOFError:
    input_str = None

result = string_to_md5(input_str)
print(result)