import sys

def separate_paren_groups(paren_string):
    groups = paren_string.split(')(')
    return groups

paren_string = ''.join(map(str.strip, sys.stdin.readlines()))
result = separate_paren_groups(paren_string)
print(result)