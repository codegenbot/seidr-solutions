import re

def fix_spaces(text: str) -> str:
    hyphen_placeholder = '-'
    text = re.sub(r'\s+', hyphen_placeholder, text)
    text = re.sub(rf'{hyphen_placeholder}{{2,}}', hyphen_placeholder, text)
    return text

input_text = input().strip()
result = fix_spaces(input_text)
print(result)