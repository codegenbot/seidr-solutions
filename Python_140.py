import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', re.sub(r'\s', '-', text))