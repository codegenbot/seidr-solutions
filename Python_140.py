import re

def fix_spaces(text):
    text = re.sub(r"\s", "", text)
    text = re.sub(r"__", "-", text)
    text = re.sub(r"\s", "_", text)
    return text