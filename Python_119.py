def match_parens(lst):
    stack = []
    for char in lst:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack or stack[-1] != '(':
                return 'No'
            stack.pop()
        else:
            return 'No'
    return 'No' if stack else 'Yes'