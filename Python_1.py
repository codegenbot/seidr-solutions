def separate_paren_groups(paren_string: str) -> list:
    result = []
    stack = []
    groups = []

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups.append('(')
        elif char == ')':
            stack.pop()
            groups.append(')')
        
        if not stack:
            result.append(''.join(groups))
            groups = []
    
    if stack or (stack == [] and groups):
        return [""]  # Unbalanced parentheses, return an empty list
    
    return [group for group in result if group]