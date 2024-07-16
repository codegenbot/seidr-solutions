import sys
import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

for line in sys.stdin:
    result = string_to_md5(line.strip())
    print(result)