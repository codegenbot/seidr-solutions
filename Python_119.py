def match_parens(lst):
    result = []
    for s in lst:
        stack = 0
        match = "Yes"
        for c in s:
            if c == "(":
                stack += 1
            elif c == ")":
                if stack <= 0:
                    match = "No"
                    break
                else:
                    stack -= 1
        result.append(match)
    return result