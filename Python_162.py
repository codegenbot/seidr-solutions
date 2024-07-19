import hashlib
import sys

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

result = None
try:
    input_text = sys.stdin.readline().strip()
    result = string_to_md5(input_text)
except EOFError:
    pass

print(result)