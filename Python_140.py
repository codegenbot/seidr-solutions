import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    text = re.sub(r'-+', '-', text)
    return text