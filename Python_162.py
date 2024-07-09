import hashlib

def string_to_md5(input_str):
    try:
        return hashlib.md5(input_str.strip().encode('utf-8')).hexdigest()
    except UnicodeDecodeError:
        return hashlib.md5(input_str.strip().encode('latin-1')).hexdigest()

input_str = input().strip()
result = string_to_md5(input_str)
print(result)