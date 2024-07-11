import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter a string: ")
result = string_to_md5(text)

if result:
    print(f"The MD5 hash of '{text}' is {result}")
else:
    print("Invalid input")