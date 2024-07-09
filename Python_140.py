import re

def fix_spaces(text):
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))

text = input().rstrip()
result = fix_spaces(text)
print(result)