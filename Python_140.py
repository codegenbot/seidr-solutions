import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text

# Provide input to the program before running it.
print(fix_spaces(input().strip()))