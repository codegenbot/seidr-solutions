def match_parens(lst):
    open_count = lst.count('(')
    close_count = lst.count(')')
    if open_count == close_count:
        return 'Yes'
    elif open_count == 0 or close_count == 0:
        return 'No'
    else:
        return 'Yes'