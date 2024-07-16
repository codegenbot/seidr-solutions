def match_parens(lst):
    stack = []
    for s in lst:
        if s == "(":
            stack.append(s)
        elif s == ")" and stack and stack[-1] == "(":
            stack.pop()
    return "Yes" if not stack else "No"