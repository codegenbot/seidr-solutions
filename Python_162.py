```Python
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

md5_hash = string_to_md5(input("Enter a string: "))
print(md5_hash)