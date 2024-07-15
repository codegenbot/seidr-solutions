import re

def fix_spaces(text: str) -> str:
    hyphen_placeholder = '###'
    text = re.sub(r'\s+', hyphen_placeholder, text)
    text = re.sub(r'-{2,}', '-', text)
    text = text.replace(hyphen_placeholder, '-')
    return text

input_text = input().strip()
result = fix_spaces(input_text)
print(result)