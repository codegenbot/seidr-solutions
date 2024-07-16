import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

for line in sys.stdin:
    input_text = line.strip()
    result = string_to_md5(input_text)
    print(result)