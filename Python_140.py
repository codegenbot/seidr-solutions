import re

def fix_spaces(text):
    text = re.sub(' +', '_', text, flags=re.I)
    return text