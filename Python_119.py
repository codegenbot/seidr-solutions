def match_parens(lst):
    open_count = 0
    for char in lst[0] + lst[1]:
        if char == '(':
            open_count += 1
        else:
            if open_count == 0:
                return 'No'
            open_count -= 1
    return 'Yes' if open_count == 0 else 'No'