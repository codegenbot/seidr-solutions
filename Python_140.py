import re


def fix_spaces(text):
    # Replace multiple spaces with single underscore
    text = re.sub(r"\s+", "_", text)

    # Remove all remaining spaces
    return text.replace(" ", "").replace("__", "_")