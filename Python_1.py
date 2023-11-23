import re

def separate_paren_groups(paren_string):
    groups = [match.group() for match in re.finditer(r'\(.*?\)', paren_string)]
    return groups