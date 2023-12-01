import hashlib

def string_to_md5(text: str) -> str:
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Testing the function
print(string_to_md5(""))