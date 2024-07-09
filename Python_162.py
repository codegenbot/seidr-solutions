import hashlib

def string_to_md5():
    text = input("Please enter some text: ")
    if not text:
        return None
    result = hashlib.md5(text.encode()).hexdigest()
    return result

print(string_to_md5())