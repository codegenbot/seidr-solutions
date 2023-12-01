import hashlib

def string_to_md5(text):
    if text == '':
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input()

# Call the function and print the result
result = string_to_md5(text)
print(result)