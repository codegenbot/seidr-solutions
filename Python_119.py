def match_parens(lst):
    for s in lst:
        if not s:  
            continue
        open_count = s.count('(')
        close_count = s.count(')')
        if open_count != close_count:
            return "No"
    return "Yes" if all(open_count == close_count for open_count, close_count in ((s.count('('), s.count(')')) for s in lst)) else "No"