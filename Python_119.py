def match_parens(lst):
    open_count = 0
    for s in lst:
        open_count += s.count("(") - s.count(")")
    return "Yes" if open_count == 0 else "No"