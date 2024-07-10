import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

combined_text = ''
try:
    while True:
        line = input()
        combined_text += line + '\n'
except EOFError:
    pass

print(fix_spaces(combined_text.strip()) )