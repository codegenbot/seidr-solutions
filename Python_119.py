```
import re


def match_parens(lst):
    for s in lst:
        open_count = 0
        close_count = 0
        for char in s:
            if char == "(":
                open_count += 1
            elif char == ")":
                close_count += 1
        if open_count != close_count:
            return "No"
    return "Yes"