```
def match_parens(lst):
    stack = []
    for s in lst:
        open_count = 0
        for c in s:
            if c == "(":
                stack.append(c)
                open_count += 1
            elif c == ")":
                if len(stack) > 0 and open_count > 0:
                    stack.pop()
                    open_count -= 1
                else:
                    return "No"
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"