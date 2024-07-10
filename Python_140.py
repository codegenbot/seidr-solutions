import re


def fix_spaces(text):
    return re.sub(r"\s+", lambda x: "_" if len(x.group().strip()) == 0 else " - ", text)