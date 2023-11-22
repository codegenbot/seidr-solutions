import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text

# Replace input().strip() with a test input string
print(fix_spaces(input().strip()))