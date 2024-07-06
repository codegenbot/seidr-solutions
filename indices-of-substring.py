import re


def indices_of_substring(text, target):
    pattern = r"(?=(%s))" % re.escape(target)
    matches = [match for match in re.finditer(pattern, text)]
    return [int(match.group(1).start()) for match in matches]