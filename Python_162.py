```python
import hashlib

def string_to_md5():
    while True:
        text = input("Enter some text: ")
        if not text.isalnum() or " " in text:
            print("Invalid input. Please enter only alphanumeric characters and spaces.")
        else:
            return hashlib.md5(text.encode('utf-8')).hexdigest()

result = string_to_md5()
print(result)