import hashlib

def string_to_md5(input_str):
    return hashlib.md5(input_str.encode('raw_unicode_escape')).hexdigest()
  
input_str = input("Enter a string: ")
result = string_to_md5(input_str)
print(result)