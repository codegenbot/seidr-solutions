def match_parens(lst):
    str1, str2 = lst
    open_count = 0
    close_count = 0

    for char in str1:
        if char == "(":
            open_count += 1
        elif char == ")":
            if open_count == 0:
                return "No"
            open_count -= 1

    for char in str2:
        if char == "(":
            open_count -= 1
        elif char == ")":
            close_count += 1

    return "Yes" if open_count == 0 and close_count == 0 else "No"