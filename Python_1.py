```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                group += stack.pop()
            if not stack:
                groups.append(group)
                group = ''
            else:
                stack.pop()  # pop the '('
    
    return [group] + groups