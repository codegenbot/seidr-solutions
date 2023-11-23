import re

def separate_paren_groups(paren_string):
    return re.findall(r'\([^()]+\)', paren_string)

input_string = input().strip()
result = separate_paren_groups(input_string)
print(result)