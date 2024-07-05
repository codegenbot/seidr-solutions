import hashlib

def string_to_md5(text):
    if text == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from the user
user_input = input()
print(string_to_md5(user_input))