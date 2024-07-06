import re

def fix_spaces(text):
    return re.sub(" +", "_", text)