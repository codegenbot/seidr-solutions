def match_parens(lst):
    result = []
    for s in lst:
        if s == s[::-1]:
            result.append("Yes")
        else:
            result.append("No")
    return result