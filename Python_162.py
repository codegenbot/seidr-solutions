import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_text = input("Enter the input string: ")
print(string_to_md5(input_text))