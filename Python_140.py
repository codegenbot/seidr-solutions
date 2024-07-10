import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = text.strip("_")
    if not text:
        return "N/A"
    return text

text = input("Enter a text: ")
result = fix_spaces(text)
print(result)