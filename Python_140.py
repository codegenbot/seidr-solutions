import re

def fix_spaces(text): 
    return re.sub(r'\s+', '_', text)

combined_text = ''
while True: 
    try:
        line = input()
        if line == '':
            break
        combined_text += line
    except (EOFError, KeyboardInterrupt):
        break

print(fix_spaces(combined_text))