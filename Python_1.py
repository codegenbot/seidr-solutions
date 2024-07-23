def separate_paren_groups(paren_string: str) -> List[str]:
    if paren_string.startswith('(\n') and paren_string.endswith(')\n'):
        return [paren_string[2:-3]]
    
    stack = []
    groups = []
    current_group = ''

    for char in paren_string:
        if char == ' ': continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if stack: 
                if len(stack) > 0: 
                    return []
                else:
                    groups.append(current_group)
                    current_group = ''
            else:
                current_group += char

    if stack:
        while stack:
            current_group += stack.pop()

    if current_group: 
        groups.append(current_group)

    return groups