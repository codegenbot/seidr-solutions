import re

def fix_spaces(text):
    text = re.sub(r'\s{2,}', '_', text)
    return "_".join(text.split())