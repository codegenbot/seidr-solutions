import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

print(fix_spaces(input("Enter your text: ").strip()))