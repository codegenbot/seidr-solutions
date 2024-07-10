import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

combined_text = ''
counter = 0
try:
    while True:
        line = input()
        combined_text += line + '\n'  # Add newline character between lines
        counter += 1
except EOFError:
    pass

print(fix_spaces(combined_text.rstrip()))  # Remove trailing newline before applying fix_spaces