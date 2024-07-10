```
import hashlib

def string_to_md5():
    return hashlib.md5(input("Enter some text: ").encode()).hexdigest()