```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ""
    
    for char in paren_string:
        if char.isspace():
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                group += stack.pop()
            if stack:
                group += stack.pop() + char
            else:
                groups.append(group)
                group = ""
    
    if stack:
        for _ in range(stack.size):
            group += stack.pop()
    else:
        groups.append(group)
    
    return [group for group in groups.split() if group]