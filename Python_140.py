import re


def fix_spaces(text):
    return re.sub(r"^\s+|\s+$", lambda x: "" if len(x.group().strip()) == 0 else "- ", text)