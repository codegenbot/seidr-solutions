import re

def fix_spaces(*args):
    return '_'.join(map(str.strip, args))

lines = []
while True:
    try:
        line = input().rstrip('\r')
        if not line:
            break
        lines.append(line)
    except EOFError:
        break

combined_text = fix_spaces(*lines)
print(re.sub(r'\s+', '_', combined_text))