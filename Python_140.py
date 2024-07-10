import re
import sys

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

combined_text = ''
while True:
    try:
        line = sys.stdin.readline().strip()
        if not line:
            break
        combined_text += line + '\n'
    except:
        break

print(fix_spaces(combined_text.strip()))