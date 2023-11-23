def match_parens(lst):
    if lst[0].count('(') == lst[1].count(')'):
        return 'Yes'
    else:
        return 'No'