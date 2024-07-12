```
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

while True:
    user_input = input("Please enter the text you'd like to convert to MD5: ")
    result = string_to_md5(user_input)
    if result is not None:
        print(f"The MD5 hash of '{user_input}' is {result}.")
        break