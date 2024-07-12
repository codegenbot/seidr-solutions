import re

def indices_of_substring(text, target):
    indices = [match.start() for match in re.finditer('(?={})'.format(re.escape(target)), text)]
    return indices