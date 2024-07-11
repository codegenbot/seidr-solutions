```
import re

def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

text = input("Enter the text to fix spaces: ")
print(fix_spaces(text))