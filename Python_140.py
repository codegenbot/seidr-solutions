import re


def fix_spaces(text):
    text = re.sub(r"\s+", "-", text)
    text = text.strip()
    text = text.lower()
    return text