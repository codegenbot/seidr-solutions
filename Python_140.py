```
import re

def fix_spaces(text):
    text = re.sub(' +', '_', text)
    return text