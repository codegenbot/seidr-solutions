import re

def separate_paren_groups(paren_string):
    return re.findall(r'\(.*?\)', paren_string)

paren_string = input()
output = separate_paren_groups(paren_string)
print(output)