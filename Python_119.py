def match_parens(lst):
    count = 0
    for c in lst:
        if c == '(':
            count += 1
        elif c == ')':
            count -= 1

        if count < 0:
            return 'No'

    return 'Yes' if count == 0 else 'No'