def match_parens(lst):
    open_count = sum(1 for s in lst if s.count("(") > s.count(")"))
    return "Yes" if open_count == 0 else "No"