import re

def fix_spaces(text):
    return re.sub(r'\s{3,}', '-', re.sub(r'\s+', '_', text))

# Read input from user
text = input()

# Call the function with the input text
result = fix_spaces(text)

# Print the result
print(result)