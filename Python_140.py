
import re

def fix_spaces(text):
    text = input("Enter text to fix spaces: ")
    return re.sub(r"\s+", "-", text)