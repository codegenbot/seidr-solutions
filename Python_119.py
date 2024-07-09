def match_parens(lst):
    count = 0
    for s in lst:
        if len(s) < 3 or s[1] != '(' or s[-1] != ')':
            return 'No'
        if (s[2:-1].count('(') == s[2:-1].count(')')):
            count += 1
    
    return 'Yes' if count == len(lst) else 'No'