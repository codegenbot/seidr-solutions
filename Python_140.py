import sys

def fix_spaces(text):
    return text.replace(' ', '_')

combined_text = ' '.join(line.strip() for line in sys.stdin)

print(fix_spaces(combined_text))