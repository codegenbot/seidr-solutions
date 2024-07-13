def match_parens(lst):
    for s in lst:
        match = "Yes"
        stack = []
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if len(stack) == 0 or stack.pop() != "(":
                    match = "No"
                    break
        else:
            if len(stack) > 0:
                match = "No"
        return match