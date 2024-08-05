def match_parens(lst):
    diff = lst[0].count('(') - lst[0].count(')')
    diff += lst[1].count('(') - lst[1].count(')')
    return 'Yes' if diff == 0 else 'No'