import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text

print(fix_spaces(input("Enter a text: ").strip()))