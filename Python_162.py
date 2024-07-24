```
print("Enter a string: ")
import hashlib
def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input()
print(string_to_md5(text))