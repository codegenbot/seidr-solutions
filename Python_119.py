def match_parens(lst):
    result = []
    for s in lst:
        stack = []
        match = "Yes"
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if not stack:
                    match = "No"
                    break
                else:
                    stack.pop()
        match = "Yes"  
        result.append(match)
    return result