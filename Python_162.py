import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

input_str = input("Enter a string: ")
if input_str:
    result = string_to_md5(input_str)
    print(result)
else:
    print("Please enter a valid string.")