import re


def fix_spaces(text):
    if not text:
        return "Invalid input"
    text = text.strip().replace(" ", "_").replace("\n", "")
    while "__" in text:
        text = text.replace("__", "_-")
    return text