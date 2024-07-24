```
import hashlib

def string_to_md5(*args):
    if not args:
        return None
    text = ''.join([str(arg).lower() for arg in args])
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter a string: ").lower()
    result = string_to_md5(text)
    print(result)