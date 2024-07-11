```
def match_parens(lst):
    stack = []
    for s in lst:
        open_count = 0
        close_count = 0
        for c in s:
            if c == "(":
                stack.append(c)
                open_count += 1
            elif c == ")":
                if len(stack) > 0:
                    stack.pop()
                    close_count += 1
                else:
                    return "No"
        if open_count != close_count:
            return "No"
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"