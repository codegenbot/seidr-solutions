def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                while len(stack) > 0 and stack.pop() != "(":
                    pass
                if len(stack) == 0:
                    return "Yes"
                else:
                    return "No"
    if all(x != "(" for x in stack):
        return "Yes"
    return "No"