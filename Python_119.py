```
import re

def match_parens(lst):
    for s in lst:
        if len(re.findall('\(', s)) != len(re.findall('\)', s)):
            return 'No'
    return 'Yes'