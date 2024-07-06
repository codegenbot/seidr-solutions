import re

def indices_of_substring(text, target):
    matches = re.finditer(target, text)
    for match in matches:
        if match.start() == 0:
            return [0]
    return [match.start() for match in matches]