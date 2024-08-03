def match_parens(lst):
    open_count = 0
    close_count = 0
    for s in lst:
        if "(" in s and ")" in s:
            if s.count("(") == s.count(")"):
                return "Yes"
            else:
                return "No"
        elif "(" in s:
            open_count += 1
        elif ")" in s:
            close_count += 1
    if open_count == close_count:
        return "Yes"
    else:
        return "No"