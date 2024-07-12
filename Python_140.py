import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

text = input("Enter text: ")
result = fix_spaces(text)
print(result)