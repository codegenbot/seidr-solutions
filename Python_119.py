def match_parens(lst):
    count = 0
    for s in lst:
        if s == "(":
            count += 1
        elif s == ")":
            if count <= 0:
                return "No"
            count -= 1

    if count < 0:
        return "No"

    return "Yes" if count == 0 else "No"