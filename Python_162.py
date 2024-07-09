import hashlib

def string_to_md5(text):
    if text.strip() != "":
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Please enter a string: ").strip()
if text.strip() != "":
    print(string_to_md5(text))
else:
    print("Please provide a string.")