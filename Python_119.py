def match_parens(lst):
    diff = lst.count('(') - lst.count(')')
    return 'Yes' if diff == 0 or diff == 2 or diff == -2 else 'No'