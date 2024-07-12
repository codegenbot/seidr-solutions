```
"""
Add triple quotes around the problem description to separate it from your actual Python code.
"""

import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter some text: ")
print(string_to_md5(text))