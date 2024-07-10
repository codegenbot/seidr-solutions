import re

def fix_spaces(*args):
    return '_'.join(map(str.strip, args))

combined_text = fix_spaces(input().splitlines())
print(re.sub(r'\s+', '_', combined_text))