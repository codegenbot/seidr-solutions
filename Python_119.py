```
def match_parens(lst):
    stack = []
    for s in lst:
        open_count = 0
        close_count = 0
        for c in s:
            if c == "(":
                open_count += 1
                stack.append(c)
            elif c == ")":
                close_count += 1
                if len(stack) == 0:
                    return "No"
                else:
                    stack.pop()
        if open_count != close_count:
            return "No"
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"