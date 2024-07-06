import re


def fix_spaces(text):
    # Return the corrected output
    return re.sub(r"\s+", "-", text)