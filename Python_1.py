import re

def separate_paren_groups(paren_string):
    groups = re.findall(r'\((.*?)\)', paren_string)
    return groups