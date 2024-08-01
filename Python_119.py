def match_parens(lst):
    open_count = 0
    close_count = 0
    for s in lst:
        if s[0] == '(':
            open_count += 1
        else:
            close_count += 1
        if open_count < close_count:
            return 'No'
    return 'Yes' if open_count == close_count else 'No'