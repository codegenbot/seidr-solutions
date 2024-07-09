import hashlib

def string_to_md5():
    text = input("Enter the text to convert to MD5 hash: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

result = string_to_md5()
print(result)