import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

if len(sys.argv) != 2:
    raise ValueError("Exactly one argument should be provided")
text = sys.argv[1].strip()
if not text:
    raise ValueError("Input text cannot be empty")
result = string_to_md5(text)
print(result)