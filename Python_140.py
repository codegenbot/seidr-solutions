
import re

def fix_spaces(text, replacement):
    text = re.sub(r"\s+", replacement, text)
    return text