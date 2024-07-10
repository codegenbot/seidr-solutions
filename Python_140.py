import re

def fix_spaces(*args):
    return '_'.join(map(str.strip, args))

lines = []
while True:
    line = input().strip()
    if not line:
        break
    lines.append(line)

combined_text = fix_spaces(*lines)
print(re.sub(r'\s+', '_', combined_text))