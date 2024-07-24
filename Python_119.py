```
import re

def match_parens(lst):
    for s in lst:
        while True:
            match = re.search(r'\(([^()]+|(?R))*\)', s)
            if not match:
                return "No"
            s = s[:match.start()] + s[match.end():]
    return "Yes"