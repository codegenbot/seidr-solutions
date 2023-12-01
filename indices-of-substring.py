import re

def indices_of_substring(text, target):
    return [i.start() for i in re.finditer(f'(?={re.escape(target)})', text)]