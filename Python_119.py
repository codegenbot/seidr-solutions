def match_parens(lst):
    stack = []
    for s in lst:
        stack.append(s) if s == "(" else stack.pop() if stack and s == ")" else None
    return "Yes" if not stack else "No"