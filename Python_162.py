import hashlib

def string_to_md5():
    input_str = input("Enter a string: ")
    return hashlib.md5(input_str.encode()).hexdigest()