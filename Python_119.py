def match_parens(lst):
    count = 0
    for char in lst[0] + lst[1]:
        if char == '(':
            count += 1
        else:
            count -= 1
        if count < 0:
            return 'No'
    if count == 0:
        return 'Yes'
    else:
        return 'No'