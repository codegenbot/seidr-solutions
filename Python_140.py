import re
import sys

sys.stdin = open(0)

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip('_'))

text = input()
print(fix_spaces(text))