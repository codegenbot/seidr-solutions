import re

def fix_spaces(text: str) -> str:
    text = re.sub(r'\s+', '_', text)
    text = re.sub(r'-', '_', text)
    return text