def fix_spaces(text):
    return text.replace(' ', '_')

import sys
text = sys.stdin.readline().strip()
result = fix_spaces(text)
print(result)