```
import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    if text.isalpha():
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return "Invalid input. Please enter a string."

print(string_to_md5())