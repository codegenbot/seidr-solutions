def match_parens(lst):
    left = 0
    right = 0
    for i in lst[0]:
        if i == "(":
            left += 1
        else:
            right += 1
    for j in lst[1]:
        if j == "(":
            left += 1
        else:
            right += 1
    return "Yes" if left == right else "No"