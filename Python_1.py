```
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            current_group += '('
        elif c == ')':
            while stack and stack[-1] != '(':
                current_group += ')'
                stack.pop()
            if stack:
                current_group += ')'
                stack.pop()
            groups.append(current_group)
            current_group = ''
    
    return groups