import re

def fix_spaces():
    text = input().strip()
    print(re.sub(r"\s{2,}", "-", text.replace(" ", "_")))

fix_spaces()