import re

def fix_spaces(text):
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))

text = raw_input("Enter the text: ")
result = fix_spaces(text)
print(result)