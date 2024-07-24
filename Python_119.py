```
import re


def match_parens(lst):
    for s in lst:
        open_parens = len(re.findall("\(", s))
        close_parens = len(re.findall("\)", s))
        
        if open_parens != close_parens:
            return len(re.findall(r"\(|\)", s)) > 0
    return True