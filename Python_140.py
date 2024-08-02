import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    text = text.replace("--", "-")
    return text