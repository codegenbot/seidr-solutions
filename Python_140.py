```
import re
def fix_spaces():
    text = input("Enter some text: ")
    return re.sub(r'\s+', '_', text)