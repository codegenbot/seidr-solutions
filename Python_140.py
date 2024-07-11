```
import re

def fix_spaces(text):
    text = text.replace(" ", "_")
    while re.search(r"__", text):
        text = re.sub(r"__", "_-", text)
    return text