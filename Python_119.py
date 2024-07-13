def match_parens(lst):
    for s in lst:
        stack = []
        match = "Yes"
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if not stack or stack.pop() != "(":
                    match = "No"
                    break
        if len(stack) > 0:
            match = "No"
        print(match)