import re
def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text).replace(" ", "_")
    return text