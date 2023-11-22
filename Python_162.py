import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input("Enter a string: ")

# Call the function with the input and print the output
print(string_to_md5(text))