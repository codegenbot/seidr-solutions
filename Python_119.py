def match_parens(lst):
    s1, s2 = lst[0], lst[1]
    count_open = 0
    count_close = 0

    for char in s1:
        if char == "(":
            count_open += 1
        elif char == ")":
            count_close += 1

    for char in s2:
        if char == "(":
            count_open -= 1
        elif char == ")":
            count_close -= 1

    return "Yes" if (count_open == 0 and count_close == 0) else "No"