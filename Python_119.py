def match_parens(lst):
    count = 0
    for paren in lst[0] + lst[1]:
        if paren == '(':
            count += 1
        elif count > 0:
            count -= 1
        else:
            return 'No'
    return 'Yes' if count == 0 else 'No'