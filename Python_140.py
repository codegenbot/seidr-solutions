import re


def fix_spaces(text):
    return re.sub(r"\s+", lambda match: match.group().replace(" ", "-"), text)