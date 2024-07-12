```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter a string: ")
result = string_to_md5(text)
while not result:
    text = input("Please enter a valid string: ")
    result = string_to_md5(text)
print(result)