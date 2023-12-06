
def match_parens(lst1, lst2):
    left = 0
    for c in lst1:
        if c == '(':
            left += 1
        else:
            left -= 1
    for c in lst2:
        if c == '(':
            left -= 1
        else:
            left += 1
    return "Yes" if left == 0 else "No"