def match_parens(lst):
    for s in lst:
        open_count = s.count('(')
        close_count = s.count(')')
        if open_count != close_count:
            return 
    return