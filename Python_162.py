import hashlib

def string_to_md5(input_str):
    try:
        return hashlib.md5(input_str.encode('utf-8')).hexdigest()
    except UnicodeDecodeError:
        return hashlib.md5(input_str.encode('latin-1')).hexdigest()

result = string_to_md5(input().strip())
print(result)