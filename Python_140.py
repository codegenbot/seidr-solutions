import re
import sys

def fix_spaces():
    text = sys.stdin.read().strip()
    text = re.sub(r'\s{2,}', '_', text)
    return "_".join(text.split())

result = fix_spaces()
print(result)