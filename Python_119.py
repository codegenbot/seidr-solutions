def match_parens(lst):
    s1, s2 = lst
    return (
        "Yes"
        if (s1.count("(") == s1.count(")") and s2.count("(") == s2.count(")"))
        or ((s1.count("(") > s1.count(")")) and not any(c < "0" for c in s2))
        or ((s1.count("(") < s1.count(")")) and not any(c > "0" for c in s2))
        else "No"
    )