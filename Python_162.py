import hashlib


def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()


text = input("Enter a text: ")
result = string_to_md5(text)
print(f"MD5 hash of the input is: {result}")