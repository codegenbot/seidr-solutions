import hashlib


def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Read input from user
input_text = input("Enter a string: ")
# Call the function and print the output
print(string_to_md5(input_text))