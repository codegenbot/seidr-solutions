```
import re

def fix_spaces(text):
    if not text:
        return "Input cannot be empty."
    else:
        return re.sub(r'\s+', '-', text)