def separate_paren_groups(paren_string):
    stack = []
    result = []
    
    for char in paren_string:
        if char == '(':
            stack.append('(')
        elif char == ')':
            if stack:
                stack.pop()
            else:
                result.append(')')
    
    result.extend(stack)
    
    return ''.join(result)