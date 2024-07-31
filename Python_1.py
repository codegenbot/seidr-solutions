```
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    groups = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                stack.pop()
            if stack:
                stack.pop()
            else:
                groups.append(''.join(stack))
    
    result = ['({})'.format(group) for group in groups]
    return [group.replace('{', '').replace('}', '') for group in result]