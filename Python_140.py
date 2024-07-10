import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip())

text = input().strip()
print(fix_spaces(text))