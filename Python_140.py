import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip())

text = r input("Enter text: ")
print(fix_spaces(text))