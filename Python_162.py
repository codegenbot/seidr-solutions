import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

result = string_to_md5(sys.argv[1])
print(result)