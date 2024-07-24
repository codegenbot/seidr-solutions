import re


def fix_spaces(text):
    text = text.strip()
    text = re.sub(r" +", "_", text)
    while "__" in text:
        text = text.replace("__", "_-")
    return text