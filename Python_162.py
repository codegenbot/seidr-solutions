```Python
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

user_input = input("Please enter a string: ")
print(string_to_md5(user_input))