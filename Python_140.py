```Python
import re

def fix_spaces(text):
    if not text:
        return ""
    
    text = text.replace("\n", " ")
    
    text = text.strip().replace(" ", "_").replace('"', '').replace("'", '')
    while "__" in text:
        text = text.replace("__", "_-")
    return text