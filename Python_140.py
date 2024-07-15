import re

def fix_spaces(text: str) -> str:
    return re.sub(r'\s+', '_', text)