import re
import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

text = input().strip()
if re.match("^[a-zA-Z0-9]*$", text):
    md5_hash = string_to_md5(text)
    print(md5_hash)