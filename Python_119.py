```
import re

def match_parens(lst):
    for s in lst:
        if not re.match(r"^[()]*$", s):
            return "No"
    return "Yes"