```Python
import hashlib

def string_to_md5():
    user_input = input("Enter a text: ")
    if not user_input:
        return None
    return hashlib.md5(user_input.encode()).hexdigest()