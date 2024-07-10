import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text.strip())

text = input()  # Change input().strip() to input()
print(fix_spaces(text))