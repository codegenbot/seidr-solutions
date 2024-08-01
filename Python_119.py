def match_parens(lst):
    open_count = 0
    close_count = 0
    for s in lst:
        if s[0] == "(":
            open_count += 1
        elif s[0] == ")":
            if open_count > 0:
                open_count -= 1
            else:
                close_count += 1
    return "Yes" if open_count == 0 else "No"