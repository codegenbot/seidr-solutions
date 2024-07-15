import re

def fix_spaces(text: str) -> str:
    hyphen_placeholder = '###'
    text = re.sub(r'\s+', '_', text)
    text = text.replace('-', hyphen_placeholder)
    text = '-'.join(text.split('-'))
    text = text.replace(hyphen_placeholder, '-')
    return text

input_text = input()
print(fix_spaces(input_text))