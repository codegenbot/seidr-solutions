import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    return text


text = input("Enter the text: ")
result = fix_spaces(text)
print(result)