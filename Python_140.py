import re


def fix_spaces(text):
    text = input("Enter some text: ")
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")