import re


def indices_of_substring(text, target):
    # Add re.DOTALL flag to make . match any character
    pattern = r"(?=(%s))" % re.escape(target) + re.DOTALL
    return [match.start() for match in re.finditer(pattern, text)]