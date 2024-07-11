def match_parens(lst):
    s1, s2 = lst
    count1, count2 = 0, 0
    for char in s1:
        if char == "(":
            count1 += 1
        elif char == ")":
            count1 -= 1
    for char in s2:
        if char == "(":
            count2 += 1
        elif char == ")":
            count2 -= 1
    return "Yes" if count1 + count2 == 0 else "No"