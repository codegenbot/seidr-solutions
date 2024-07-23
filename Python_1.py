```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    current_group = ''

    for char in paren_string:
        if char == ' ': 
            continue
        elif char == '(':
            stack = [char]
            current_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if stack: 
                current_group += stack.pop()
            groups.append(current_group)
            current_group = ''
            stack = []

    if stack:
        while stack:
            current_group += stack.pop()
        groups.append(current_group)

    return groups