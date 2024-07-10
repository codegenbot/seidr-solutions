import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

text = input("Enter a text: ")
print(fix_spaces(text))