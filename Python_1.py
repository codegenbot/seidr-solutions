```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            if stack:
                stack.pop()
                current_group += char
                groups.append(current_group[1:-1])
                current_group = ''
            else:
                raise ValueError("Unbalanced parentheses")
    return groups