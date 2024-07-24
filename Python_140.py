import re

def fix_spaces(text):
    text = re.sub(r'[^a-zA-Z0-9]+', ' ', text).strip().replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    return text