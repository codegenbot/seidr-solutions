import re

def fix_spaces():
    text = input("Enter a text: ")
    return re.sub(r'\s{3,}', '-', re.sub(r'\s+', '_', text))

result = fix_spaces()
print(result)