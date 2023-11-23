import re

def separate_paren_groups(paren_string):
    groups = re.split(r'(\(\))|(\(\))', paren_string)
    return groups