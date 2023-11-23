import sys

def separate_paren_groups(paren_string):
    groups = paren_string.replace(" ", "").split(')(')
    return groups

paren_string = sys.argv[1].strip()
result = separate_paren_groups(paren_string)
print(result)