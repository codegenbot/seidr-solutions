import re

def fix_spaces(text: str) -> str:
    hyphen_placeholder = '###'
    text = re.sub(r'-{2,}', hyphen_placeholder, text)
    text = re.sub(r'-+', '-', text)
    text = text.replace(hyphen_placeholder, '-')
    return text

input_text = input("Enter the text: ")
result = fix_spaces(input_text)
print(result)