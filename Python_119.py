def match_parens(lst):
    left = 0
    right = 0
    for char in lst[0]:
        if char == "(":
            left += 1
        else:
            right += 1
    for char in lst[1]:
        if char == "(":
            left -= 1
        else:
            right -= 1
    return "Yes" if left == 0 and right == 0 else "No"