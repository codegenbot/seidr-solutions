
import re

def fix_spaces(text):
    text = input("Enter a string: ")
    return re.sub(r"\s+", "-", text)
```