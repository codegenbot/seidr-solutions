def match_parens(lst):
    open_parens = 0
    close_parens = 0

    for s in lst:
        if s == "(":
            open_parens += 1
        elif s == ")":
            close_parens += 1

    return "Yes" if open_parens == close_parens else "No"