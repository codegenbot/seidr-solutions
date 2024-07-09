def match_parens(lst):
    if len(lst) % 2 != 0:
        return 'No'
    
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
            
    return 'Yes' if not stack else 'No'