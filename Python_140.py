import re

def fix_spaces(text):
    return re.sub(r'[^A-Za-z0-9 ]', '', text.replace(' ', '_'))

text = input()
result = fix_spaces(text)
print(result)