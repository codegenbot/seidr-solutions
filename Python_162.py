import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Receive input from user
input_text = input("Enter a string: ")

# Call the function and print the MD5 hash
result = string_to_md5(input_text)
print(result)