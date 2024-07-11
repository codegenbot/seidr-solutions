import re


def fix_spaces(text):
    text = re.sub(r"\s+", "-", text).strip("-")
    while "--" in text:
        text = text.replace("--", "-")
    return text