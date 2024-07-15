import hashlib

def string_to_md5(text):
    if text == '':
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter text: ")
output = string_to_md5(text)
print(output)