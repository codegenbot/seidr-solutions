import hashlib

input_text = input("Enter your string: ")
def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()
print(string_to_md5(input_text))