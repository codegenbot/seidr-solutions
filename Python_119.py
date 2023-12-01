def match_parens(lst):
    for s in lst:
        count = 0
        for c in s:
            if c == '(':
                count += 1
            elif c == ')':
                count -= 1
                if count < 0:
                    return 'No'
        if count != 0:
            return 'No'
    return 'Yes'