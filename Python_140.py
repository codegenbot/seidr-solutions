import sys
import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip())

text = sys.stdin.readline().strip()
print(fix_spaces(text))