```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    md5_hash = hashlib.md5()
    md5_hash.update(text.encode('utf-8'))
    return md5_hash.hexdigest()

text = input("Enter some text: ")
print(string_to_md5(text))