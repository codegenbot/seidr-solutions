import re


def fix_spaces():
    pattern = r"\s+"
    replacement = "_"

    text = input("Enter a text: ")
    text = re.sub(pattern, replacement, text)
    return text