import hashlib

def string_to_md5(input_str):
    return hashlib.md5(input_str).hexdigest()
  
input_str = input("Enter a string: ").encode('utf-8')
result = string_to_md5(input_str)
print(result)