```
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''
    
    for char in paren_string:
        if char.isspace():
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            stack.pop()
            group += char
            if not stack:
                groups.append(group)
                group = ''

    return groups