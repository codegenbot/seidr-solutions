import re
import sys

def separate_paren_groups(paren_string):
    groups = re.findall(r'\(.*?\)', paren_string)
    return groups

paren_string = sys.stdin.readline().strip()
result = separate_paren_groups(paren_string)
print(result)