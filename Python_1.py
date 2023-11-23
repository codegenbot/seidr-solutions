import re

def separate_paren_groups():
    paren_string = input().strip()
    return re.findall(r'\([^()]+\)', paren_string)

result = separate_paren_groups()
print(result)