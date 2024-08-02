import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

# Read input from user
input_text = input("Enter a string: ")

# Call function with input and print output
print(string_to_md5(input_text))