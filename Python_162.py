import hashlib

def string_to_md5(text):
    if text:
        try:
            return hashlib.md5(text.encode()).hexdigest()
        except Exception as e:
            return str(e)
    else:
        return None

text = input("Please enter a string: ")
print(string_to_md5(text))