import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    while True:
        try:
            input_text = input().strip()
        except EOFError:
            break
        result = string_to_md5(input_text)
        print(result)
except EOFError:
    pass