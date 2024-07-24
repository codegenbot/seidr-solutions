import re

def fix_spaces(text):
    text = text.strip().replace(" ", "_").replace("\n", "")
    while "__" in text:
        text = text.replace("__", "_-")
    return text