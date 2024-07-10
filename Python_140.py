import re
import sys

def fix_spaces(sys, *args):
    return '_'.join(map(str.strip, args))

lines = []
while True:
    line = sys.stdin.readline().strip()
    if not line:
        break
    lines.append(line)

combined_text = fix_spaces(sys, *lines)
print(re.sub(r'\s+', '_', combined_text))