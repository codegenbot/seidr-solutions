import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_text = input("Enter the text to convert to MD5: ").strip()
result = string_to_md5(input_text)
print(result)