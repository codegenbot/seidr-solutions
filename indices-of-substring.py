```
import re

def find_indices(text, target):
    return [m.start() for m in re.finditer(target, text)]