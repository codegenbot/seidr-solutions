import re

def fix_spaces(text):
    if type(text) != str:
        return "Invalid Input: Please enter a string."
    text = re.sub(' +', '_', text)
    return text