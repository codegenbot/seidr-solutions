import re


def fix_spaces(text):
    while "  " in text:
        text = text.replace("  ", " ")
    text = re.sub(" +", "_", text)
    return text