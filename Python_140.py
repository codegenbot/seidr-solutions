import re

def fix_spaces(text):
    text = re.sub(r'\s+', '-', text)
    text = text.replace("--", "-")
    return text