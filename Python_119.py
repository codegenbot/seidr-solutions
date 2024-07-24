import re


def match_parens(lst):
    count_open = 0
    count_close = 0
    for s in lst:
        count_open += len(re.findall("\(", s))
        count_close += len(re.findall("\)", s))
    return "Yes" if count_open == count_close else "No"