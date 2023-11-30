import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = re.sub(r"__", "-", text)
    
    if text[0] == "_":
        text = "-" + text[1:]
    
    return text