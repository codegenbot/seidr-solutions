def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append('(')
        else:
            if not stack:
                return 'No'
            stack.pop()
            if not stack:
                return 'No'    # Fix: Return 'No' if stack is empty after popping
    if stack:
        return 'No'
    return 'Yes'