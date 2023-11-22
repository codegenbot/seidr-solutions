import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

input_string = input("Enter the input string: ")
md5_hash = string_to_md5(input_string)
print("MD5 hash:", md5_hash)