```python
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter a string: ")

while not text.strip():
    print("Please enter a valid string. It can't be empty.")
    text = input("Enter a string: ")

print(string_to_md5(text))