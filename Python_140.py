import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip())

try:
    while True:
        text = input().strip()
        print(fix_spaces(text))
except EOFError:
    pass