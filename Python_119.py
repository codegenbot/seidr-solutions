def match_parens(lst):
    open_count = lst.count('(')
    close_count = lst.count(')')
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'