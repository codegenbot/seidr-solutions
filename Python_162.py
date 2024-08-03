```Python
import hashlib

def string_to_md5():
    text = input("Enter string:")
    return hashlib.md5(text.encode()).hexdigest()