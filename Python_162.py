from hashlib import md5

def string_to_md5(text):
    return md5(text.encode()).hexdigest()

try:
    result = string_to_md5(input().strip())
    print(result)
except EOFError:
    print("No input received.")