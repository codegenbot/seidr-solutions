import re

def fix_spaces(text):
    if type(text) != str:
        return 
    text = re.sub(' +', '_', text)
    return text