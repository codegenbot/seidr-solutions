import sys

def fix_spaces():
    text = sys.argv[1].strip()
    return text.replace(' ', '_')

result = fix_spaces()
print(result)