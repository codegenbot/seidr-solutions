import re

def fix_spaces():
    text = input().strip()
    text = re.sub(r'\s+', '_', text)
    return text

print(fix_spaces())