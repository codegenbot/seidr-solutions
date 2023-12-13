def match_parens(lst):
    open_parens = 0
    for c in lst:
        if c == '(':
            open_parens += 1
        elif c == ')':
            if open_parens == 0:
                return 'No'
            open_parens -= 1

    return 'Yes' if open_parens == 0 else 'No'