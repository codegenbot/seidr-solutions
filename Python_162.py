import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input string from user
input_text = input("Enter a string: ")

# Call string_to_md5 function with the input string
result = string_to_md5(input_text)
print(result)