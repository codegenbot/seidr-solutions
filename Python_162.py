import hashlib

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter the text to convert to MD5: ")
result = string_to_md5(text)
print(result)