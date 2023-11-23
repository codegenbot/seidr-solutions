import re

def fix_spaces(text):
    return "_".join(re.split(r"\s+", text))