import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Receiving input with a prompt
text = input("Enter a text to convert to MD5: ")
result = string_to_md5(text)
print(result)