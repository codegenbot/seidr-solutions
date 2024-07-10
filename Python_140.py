import re
import sys

def fix_spaces(text):
    return re.sub(r'\s+', '_', text).strip('_')

text = sys.stdin.readline().rstrip()
print(fix_spaces(text))