
import re

def fix_spaces(text):
    text = raw_input("Enter a string: ")
    return re.sub(r"\s+", "-", text)