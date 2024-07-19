import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_text = str(input("Enter a text to convert to MD5: "))
result = string_to_md5(input_text)
print(result)