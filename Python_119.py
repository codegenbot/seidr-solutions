def match_parens(lst):
    counter = 0
    for s in lst:
        for c in s:
            if c == '(':
                counter += 1
            elif c == ')':
                if counter == 0:
                    return 'No'
                counter -= 1
    if counter != 0:
        return 'No'
    return 'Yes'