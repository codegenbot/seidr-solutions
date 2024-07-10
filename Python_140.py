import re

def fix_spaces():
    return '_'.join(map(str.strip, input().splitlines()))

combined_text = fix_spaces()
print(re.sub(r'\s+', '_', combined_text))