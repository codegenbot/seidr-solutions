import re

def fix_spaces(text):
    text = input("Enter a string: ")
    return re.sub(r"\s+", "-", text)

# Test the function with a sample input
result = fix_spaces("hello world")
print(result)