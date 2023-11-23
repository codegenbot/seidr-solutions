import re

def fix_spaces(text):
    return re.sub(r'[^A-Za-z0-9_]', '', text.replace(' ', '_'))

text = "Hello World!"
result = fix_spaces(text)
print(result)