import hashlib

def string_to_md5():
    text = input("Enter a string: ").strip()
    return hashlib.md5(text.encode()).hexdigest() if text and isinstance(text, str) else None

result = string_to_md5()
print(result)