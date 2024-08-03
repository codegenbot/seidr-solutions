```
import hashlib

def string_to_md5():
    if not input("Enter text: ").lower():
        return None
    return hashlib.md5(input("Enter text: ").lower().encode()).hexdigest()