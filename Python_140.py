import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text

input_text = input().strip()
print(fix_spaces(input_text))