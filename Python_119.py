def match_parens(lst):
    a = lst[0].count("(") - lst[0].count(")")
    b = lst[1].count(")") - lst[1].count("(")
    return "Yes" if (a == 0 and b == 0) or ((a > 0 and b > 0)) else "No"