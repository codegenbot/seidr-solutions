import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()
    
# Read input from user
text = input()

# Call the function with input and print the result
print(string_to_md5(text))