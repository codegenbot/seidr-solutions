"""
Write a function that takes some text as input and returns the MD5 hash of this text.
For example, if you enter "Hello World", the function should return the hexadecimal representation of the MD5 hash of "Hello World".

import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter some text: ")
print(string_to_md5(text))