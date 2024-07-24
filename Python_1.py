```
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            while len(stack) > 0 and stack[-1] != '(':
                current_group += stack.pop()
            if len(stack) > 0 and stack[-1] != '(':
                return []
            else:
                stack.pop()
                groups.append(current_group)
                current_group = ''
        else:
            current_group += char
    while len(stack) > 0:
        for _ in range(len(stack)):
            current_group += stack.pop()
    if len(stack) > 0 or (current_group and current_group[0] != '('):
        return []
    groups.append(current_group)
    
    return groups