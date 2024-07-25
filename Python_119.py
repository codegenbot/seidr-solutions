```
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if len(stack) > 0 and stack.pop() == "(":
                    continue
                else:
                    return "No"
    if not all(x != "(" for x in stack):
        return "No"
    return "Yes"