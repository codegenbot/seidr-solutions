def match_parens(lst):
    open_count = 0
    for s in lst:
        for char in s:
            if char == "(":
                open_count += 1
            else:
                open_count -= 1
                if open_count < 0:
                    return "No"
    return "Yes" if open_count == 0 else "No"