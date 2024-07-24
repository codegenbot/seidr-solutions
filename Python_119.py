```
import re


def match_parens(lst):
    for s in lst:
        open_count = 0
        close_count = 0
        nesting_diff = 0
        for char in s:
            if char == "(":
                open_count += 1
                nesting_diff += 1
            elif char == ")":
                close_count += 1
                if open_count > 0:
                    open_count -= 1
                    nesting_diff -= 1
                else:
                    return "No"
        if nesting_diff != 0:
            return "No"
    return "Yes"