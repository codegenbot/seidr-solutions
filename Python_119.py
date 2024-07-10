def match_parens(lst):
    return 'Yes' if lst[0].count('(') == lst[0].count(')') and lst[1].count('(') == lst[1].count(')') else 'No'