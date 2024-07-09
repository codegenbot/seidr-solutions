import hashlib

def string_to_md5(text):
    if text is not None:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Please enter a string: ")
while not text:
    print("Please provide a string.")
    text = input("Please enter a string: ")

print(string_to_md5(text))