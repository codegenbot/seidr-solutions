def match_parens(lst):
    left = 0
    right = 0
    for c in lst:
        if c == "(":
            left += 1
        else:
            right += 1
    return "Yes" if left == right else "No"