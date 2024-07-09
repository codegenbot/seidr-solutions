```
import hashlib
import sys

def string_to_md5():
    try:
        text = str(input("Enter your text: "))
    except KeyboardInterrupt:
        return None

    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()