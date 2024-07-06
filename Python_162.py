```Python
import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        print("Program did not receive expected input")
        return None