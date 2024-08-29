```
import re

def indices_of_substring(text, target):
    return [m.start() for m in re.finditer(target, text)]