def match_parens(lst):
    for s in lst:
        stack = [False]
        match = "Yes"
        for c in s:
            if c == "(":
                stack.append(True)
            elif c == ")":
                if len(stack) > 1:
                    stack.pop()
                else:
                    match = "No"
                    break
        if len(stack) > 1:
            match = "No"
        print(match)