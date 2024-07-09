import re

def fix_spaces():
    text = input("Enter the text: ")
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))