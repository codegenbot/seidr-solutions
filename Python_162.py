import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

def get_user_input():
    user_input = input("Enter a string: ")
    if not user_input:
        print("Input cannot be empty. Please try again.")
    else:
        result = string_to_md5(user_input)
        print("MD5 hash value:", result)

get_user_input()