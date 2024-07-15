import re

def fix_spaces(text: str) -> str:
    hyphen_placeholder = '###'
    text = re.sub(r'\s+', '_', text)
    text = re.sub(r'-{2,}', '-', text)
    text = text.replace(hyphen_placeholder, '-')
    return text

def input_text_source() -> str:
    return input()

input_text = input_text_source()
result = fix_spaces(input_text)
print(result)