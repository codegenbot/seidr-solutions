import re

def separate_paren_groups(paren_string):
    groups = re.findall(r'\([^()]*\)', paren_string)
    return groups

input_string = input()
result = separate_paren_groups(input_string)
print(result)