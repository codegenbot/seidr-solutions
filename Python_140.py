import re

def fix_spaces(text): 
    return re.sub(r'\s+', '_', text)

combined_text = ''
while True: 
    try:
        line = input()
        combined_text += line
    except EOFError:
        break

print(fix_spaces(combined_text))