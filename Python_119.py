```
def match_parens(lst):
    stack = []
    for s in lst:
        s = "(" + s + ")"
        open_count = 0
        for c in s:
            if c == "(" and open_count == 0:
                stack.append(c)
                open_count += 1
            elif c == ")" and open_count > 0:
                stack.pop()
                open_count -= 1
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"