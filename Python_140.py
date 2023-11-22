import re

def fix_spaces(text):
    text = text.replace(" ", "_")
    text = re.sub("_+", "_", text)
    return text