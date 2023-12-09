def match_parens(lst):
    s1, s2 = lst
    n1 = s1.count('(') - s1.count(')')
    n2 = s2.count('(') - s2.count(')')
    if n1 < 0 or n2 < 0:
        return 'No'
    else:
        return 'Yes'