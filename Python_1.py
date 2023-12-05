def separate_paren_groups(paren_string):
    groups = []
    stack = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack:
                raise ValueError("Unbalanced parentheses")
            top = stack.pop()
            if top != '(':
                raise ValueError("Unbalanced parentheses")
        else:
            groups.append(char)
    
    if stack:
        raise ValueError("Unbalanced parentheses")
    
    return groups