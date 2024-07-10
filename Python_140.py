import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip())

text = raw_input("Enter the text: ").strip()
print(fix_spaces(text))