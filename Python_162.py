import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

# Read input from user
try:
    text = input().strip() if text else ""
except EOFError:
    text = ""

# Call the function with the input
result = string_to_md5(text)
# Print the result
print(result)