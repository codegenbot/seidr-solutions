import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    while True:
        input_text = input()
        result = string_to_md5(input_text)
        print(result)
except EOFError:
    pass