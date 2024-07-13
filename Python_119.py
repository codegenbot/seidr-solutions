def match_parens(lst):
    result = []
    stack = 0
    for s in lst:
        open_count = 0
        match = "Yes"
        for c in s:
            if c == "(":
                open_count += 1
            elif c == ")":
                if open_count > 0:
                    open_count -= 1
                else:
                    match = "No"
                    break
        if open_count > 0:
            match = "No"
        result.append(match)
    return result