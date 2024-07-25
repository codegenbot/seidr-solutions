def match_parens(lst):
    count = 0
    for s in lst:
        count += 1 if s == '(' else -1
        if count < 0:
            return 'No'
    return 'Yes' if count == 0 else 'No'