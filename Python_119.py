def match_parens(lst):
    count = 0
    for char in lst:
        if char == "(":
            count += 1
        elif char == ")":
            if count > 0:
                count -= 1
            else:
                return "No"
    return "Yes" if count == 0 else "No"