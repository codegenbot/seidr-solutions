```
def match_parens(lst):
    stack = []
    for s in lst:
        open_count = 0
        close_count = 0
        for c in s:
            if c == "(":
                open_count += 1
            elif c == ")":
                close_count += 1
        if open_count != close_count:
            return "No"
    return "Yes"