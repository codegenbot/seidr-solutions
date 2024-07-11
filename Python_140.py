```
import re
def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text

text = input("Enter the text to fix spaces: ").strip().replace('  ', ' ')
print(fix_spaces(text))