def match_parens(lst):
    for char in lst:
        count = 0
        if char == '(':
            count += 1
        else:
            if count == 0:
                return 'No'
            count -= 1
    if count == 0:
        return 'Yes'
    else:
        return 'No'