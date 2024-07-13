def match_parens(lst):
    for s in lst:
        stack = []
        match = True
        for c in s:
            if c == "(":
                if not stack:
                    stack.append(c)
                else:
                    match = False
                    break
            elif c == ")":
                if len(stack) > 0:
                    stack.pop()
                else:
                    match = False
                    break
        if len(stack) > 0:
            match = False
        return str(match)

print(match_parens(["("]))