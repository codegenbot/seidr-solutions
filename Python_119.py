```
import re

def match_parens(lst):
    for s in lst:
        if sum(1 for _ in re.finditer('\(', s)) != sum(1 for _ in re.finditer('\)', s)):
            return 'No'
    return 'Yes'