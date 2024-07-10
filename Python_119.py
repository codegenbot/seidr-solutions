def match_parens(lst):
    return (
        "Yes"
        if sum(1 for s in lst if isinstance(s, str) and s.count("(") == s.count(")"))
        == 0
        else "No"
    )