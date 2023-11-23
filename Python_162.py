from hashlib import md5

def string_to_md5(text):
    return md5(text.encode()).hexdigest()

try:
    text = input("Enter a string: ").strip()
    result = string_to_md5(text)
    print(result)
except EOFError:
    print("No input received.")