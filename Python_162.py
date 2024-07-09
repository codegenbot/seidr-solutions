import hashlib
import sys

def string_to_md5(text):
    if text is not None:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

if len(sys.argv) == 2:
    text = sys.argv[1]
    print(string_to_md5(text))
else:
    print("Please provide a string as an argument.")