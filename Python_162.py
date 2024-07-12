import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

user_input = input()
result = string_to_md5(user_input)
print(result)