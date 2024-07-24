import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Read input
input_text = input("Enter a string: ")

# Call the function and print the output
print(string_to_md5(input_text))