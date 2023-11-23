import re

def separate_paren_groups():
    paren_string = input()
    groups = re.split(r'\)\(|\(\)', paren_string)
    groups = [group.strip() for group in groups]
    return groups