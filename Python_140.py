import re

def fix_spaces(text: str) -> str:
    text = re.sub(r'\s+', '_', text)
    text = '-'.join(text.split('-'))
    return text