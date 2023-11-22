import re

def fix_spaces():
    text = input("Enter the input text: ")
    return re.sub(r'\s+', '_', text)