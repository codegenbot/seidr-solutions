import hashlib

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

input_text = input("Enter a string:").strip()
result = string_to_md5(input_text)
print(result)