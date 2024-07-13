```python
import hashlib
import re

def string_to_md5():
    while True:
        text = input("Enter a string: ")
        if not re.match("^[a-zA-Z0-9]+$", text):
            print("Invalid input. Please enter only alphanumeric characters.")
        else:
            return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    print(string_to_md5())