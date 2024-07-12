import hashlib

def string_to_md5(text):
    if not text:
        return None
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        return str(e)

text = input("Please enter a string: ")
print(string_to_md5(text))