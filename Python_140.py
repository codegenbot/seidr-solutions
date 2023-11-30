import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = re.sub(r"_+", "-", text)
    if text.startswith("_"):
        text = "-" + text[1:]
    return text