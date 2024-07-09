import re

def fix_spaces():
    text = input().strip()
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))