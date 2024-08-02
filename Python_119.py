def match_parens(lst):
    open_count = 0
    close_count = 0
    for s in lst:
        for char in s:
            if char == '(':
                open_count += 1
            else:
                if open_count > 0:
                    open_count -= 1
                else:
                    close_count += 1
    return 'Yes' if open_count == close_count == 0 else 'No'