def match_parens(lst):
    stack = []
    for s in lst:
        if not s: 
            continue
        for c in s:
            if c == "(":
                stack.append("(")
            elif c == ")":
                if len(stack) > 0 and stack.pop() == "(":
                    continue
                else:
                    return "No"
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"