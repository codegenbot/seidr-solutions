import hashlib

def string_to_md5(text):
    if text is not None:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = "input string here"
if text:
    print(string_to_md5(text))
else:
    print("Please provide a string.")