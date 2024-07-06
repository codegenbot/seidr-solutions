import re


def fix_spaces(text):
    # text = input()  # read input from user
    text = text.replace(" ", "")
    return re.sub(r"\s+", "_", text)