import re

def fix_spaces(text):
    return re.sub(r'\s{3,}', '-', re.sub(r'\s{2}', '_', text.replace(' ', '_')))

text = input("Enter a text: ")
result = fix_spaces(text)
print(result)