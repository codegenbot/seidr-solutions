import re


def indices_of_substring(text, target):
    matches = re.finditer(target, text)
    return [match.start() for match in matches]