def match_parens(lst):
    count = 0
    for s in lst:
        count += s.count('(') - s.count(')')
        if count < 0:
            return 'No'
    if count == 0:
        return 'Yes'
    else:
        return 'No'