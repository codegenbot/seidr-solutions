import re


def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    while True:
        text = re.sub(r"_{2,}", "_", text)
        if "_" not in text[1:]:
            break
    return text