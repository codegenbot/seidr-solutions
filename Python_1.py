```
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for paren in paren_string:
        if paren == ' ':
            continue
        
        if paren in '({':
            stack.append(paren)
            current_group += paren
        elif paren in ')}':
            if stack and stack[-1] + paren in '())':
                stack.pop()
                current_group += paren
            else:
                groups.append(current_group)
                current_group = ''
    
    if stack or current_group:
        raise ValueError("Invalid parentheses")
    
    return [group.strip() for group in current_group.split('(')]