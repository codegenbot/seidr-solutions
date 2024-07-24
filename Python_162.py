```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = """Enter a string: """.join(input().lower())
    if len(text) > 0:
        result = string_to_md5(text)
        print(result)