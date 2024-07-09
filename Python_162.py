import hashlib

input_str = input("Enter a string: ")

def string_to_md5(input_str):
    return hashlib.md5(input_str.encode()).hexdigest()

result = string_to_md5(input_str)
print(result)