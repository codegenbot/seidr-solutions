import re
def fix_spaces(text):
    text = " ".join(text.split())
    text = text.replace(" ", "_")
    text = re.sub(' +', '_', text)
    return text