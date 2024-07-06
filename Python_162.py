```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter your text (or 'q' to quit): ")
        if text.lower() == 'q':
            break
        if text:
            return hashlib.md5(text.encode()).hexdigest()
        else:
            return None