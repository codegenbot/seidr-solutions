def match_parens(lst):
    count = 0
    for i in lst:
        if i == '(':
            count += 1
        elif i == ')':
            count -= 1
            if count < 0:
                return 'No'
    return 'Yes' if count == 0 else 'No'