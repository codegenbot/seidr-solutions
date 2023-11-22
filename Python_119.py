def match_parens(lst):
    count = 0
    for char in lst:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        if count < 0:
            return 'No'
    if count == 0:
        return 'Yes'
    else:
        return 'No'