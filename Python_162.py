import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

user_input = input("Enter text to convert to MD5 hash: ")
result = string_to_md5(user_input)
print(result)