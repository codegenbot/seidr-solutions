```Python
import re

def fix_spaces(text):
    if not isinstance(text, str):
        return "Invalid input. Please provide a string."
    if not text:
        return ""
    text = text.strip().replace(" ", "_").replace("\n", "")
    while "__" in text:
        text = text.replace("__", "_-")
    return text