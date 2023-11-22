import re


def fix_spaces():
    text = input()
    text = re.sub(r"\s+", "_", text)
    print(text)


fix_spaces()