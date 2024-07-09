import re

def fix_spaces(text):
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))

input_text = input().strip()
result = fix_spaces(input_text)
print(result)