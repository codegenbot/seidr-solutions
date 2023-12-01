import hashlib

def string_to_md5(text):
    if text == '':
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

user_input = input()
result = string_to_md5(user_input)
print(result)