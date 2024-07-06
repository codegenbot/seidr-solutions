```
import hashlib

def string_to_md5():
    while True:
        text = input("Enter your text (or 'stop' to quit): ")
        if text.lower() == 'stop':
            break
        if text:
            print(hashlib.md5(text.encode()).hexdigest())
        else:
            print(None)