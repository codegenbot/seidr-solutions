import hashlib

def string_to_md5(text):
    if text.strip() == "":
        return ""
    else:
        return hashlib.md5(text.encode()).hexdigest()

result = string_to_md5(input("Enter text to hash: "))
print(result)