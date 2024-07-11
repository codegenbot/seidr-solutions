import re


def fix_spaces(text):
    pattern = r"\s+"
    replacement = "_"
    text = re.sub(pattern, replacement, text)
    return text

text = input()
print(fix_spaces(text))