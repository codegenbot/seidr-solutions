import re

def fix_spaces(text):
    return re.sub(r'\s+', ' ', text.strip().replace("--", "-").replace("\n", "").replace(" ", "_"))