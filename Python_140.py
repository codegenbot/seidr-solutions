import re

def fix_spaces():
    text = input().strip()
    return re.sub(r'\s{3,}', '-', re.sub(r'\s+', '_', text))

output = fix_spaces()
print(output)