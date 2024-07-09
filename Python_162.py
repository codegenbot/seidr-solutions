```
import hashlib

def string_to_md5():
    while True:
        text = input("Please enter some text (or 'exit' to stop): ")
        if text.lower() == 'exit':
            return None
        if not text:
            continue
        return hashlib.md5(text.encode()).hexdigest()

print(string_to_md5())