import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = re.sub(r"_{2}", "-", text)
    return text