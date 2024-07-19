def match_parens(lst):
    count = 0
    for s in lst:
        for char in s:
            if char == '(':
                count += 1
            else:
                if count == 0:
                    return 'No'
                count -= 1
    return 'Yes'