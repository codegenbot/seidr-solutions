```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

while True:
    text = input("Please enter a string: ")
    if text:
        break

result = string_to_md5(text)
print(result)