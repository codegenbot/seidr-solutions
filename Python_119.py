def match_parens(lst):
    stack = []
    for paren in lst[0] + lst[1]:
        if paren == '(':
            stack.append(paren)
        elif stack and stack[-1] == '(':
            stack.pop()
        else:
            return 'No'
    return 'Yes' if not stack else 'No'