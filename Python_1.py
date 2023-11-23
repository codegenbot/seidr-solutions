import re

def separate_paren_groups():
    paren_string = input("Enter the string: ")
    return re.findall(r'\([^()]+\)', paren_string)

result = separate_paren_groups()
print(result)