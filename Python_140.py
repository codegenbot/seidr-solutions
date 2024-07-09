import re

def fix_spaces(text):
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))

text = input("Enter the text: ").rstrip()
result = fix_spaces(text)
print(result)