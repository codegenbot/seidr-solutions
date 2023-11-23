import hashlib
import sys

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

# get the input from the user in multiple lines
text = "\n".join(line.strip() for line in sys.stdin)
result = string_to_md5(text.strip())

print(result)