def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                return 'No'
    
    return 'Yes' if not stack else 'No'