import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

text_input = input()
result = fix_spaces(text_input)
print(result)