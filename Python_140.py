import sys

def fix_spaces():
    text = sys.stdin.readline().rstrip()
    return text.replace(' ', '_')

result = fix_spaces()
print(result)