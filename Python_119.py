def match_parens(lst):
    for s in lst:
        if not s:  
            continue
        if s[0] == '(' and s[-1] != ')':
            return "No"
        if s[-1] == ')' and s[0] != '(':
            return "No"
    return "Yes"