import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

try:
    text = input("Enter a string: ")
    print(string_to_md5(text))
except:
    print("An error occurred while reading input.")