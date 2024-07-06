import re


def fix_spaces(text):
    # Replace all consecutive spaces with a single underscore using a regular expression
    text = re.sub(r" +", "_", text)
    return text.replace(" ", "")