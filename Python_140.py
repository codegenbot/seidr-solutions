import re

def fix_spaces():
    text = input()
    return re.sub(r'\s+', '_', text)