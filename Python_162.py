import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Enter the text to convert to MD5: ")
result = string_to_md5(text)
print(result)