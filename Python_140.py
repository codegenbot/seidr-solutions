```Python
import re

text = input()  
def fix_spaces(text):
    if not text:
        return ""
    text = text.strip().replace(" ", "_").replace("\n", "")
    while "__" in text:
        text = text.replace("__", "_-")
    return text

print(fix_spaces(text))