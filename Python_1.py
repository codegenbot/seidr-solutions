import re

def separate_paren_groups(paren_string):
    return [match for match in re.findall(r'\([^()]*\)', paren_string)]