```
import re
def fix_spaces(text):
    return re.sub(r'\s+', '-', text).replace('_','_')
text = input("Enter a string: ")
print(fix_spaces(text))