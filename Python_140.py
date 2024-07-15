import re

def fix_spaces(text: str) -> str:
    hyphen_placeholder = '###'
    text = re.sub(r'\s+', '_', text)
    text = text.replace('-', hyphen_placeholder)
    text = '-'.join([part.replace(hyphen_placeholder, '-') for part in text.split('-')])
    return text