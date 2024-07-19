import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

while True:
    input_text = sys.stdin.readline().strip()
    if input_text:
        result = string_to_md5(input_text)
        print(result)
    else:
        print("Input text is empty.")