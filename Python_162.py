import hashlib
import sys

def string_to_md5(input_str):
    try:
        return hashlib.md5(input_str.encode('utf-8')).hexdigest()
    except UnicodeDecodeError:
        return hashlib.md5(input_str.encode('latin-1')).hexdigest()

input_str = sys.stdin.readline().strip()
result = string_to_md5(input_str)
print(result)