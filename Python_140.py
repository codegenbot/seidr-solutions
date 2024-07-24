import re

def fix_spaces(text):
    if not text:
        return ""
    text = text.strip().replace(" ", "_").replace("\n", "")
    while "__" in text:
        text = text.replace("__", "_-")
    return text

text = input("Please enter a string: ")
print(fix_spaces(text))