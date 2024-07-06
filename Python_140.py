import re


def fix_spaces(text):
    text = input("Enter some text to remove spaces and replace them with underscores: ")
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")