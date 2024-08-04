def match_parens(lst):
    open_count = lst[0].count('(')
    close_count = lst[1].count(')')
    
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'