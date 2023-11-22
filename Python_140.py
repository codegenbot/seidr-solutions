import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text

text = input()
fix_spaces(text)