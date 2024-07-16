import re

def fix_spaces():
    text = input()
    text = re.sub(r'\s{2,}', '_', text.strip())
    return "_".join(text.split())

result = fix_spaces()
print(result)