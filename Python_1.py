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
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack or stack.pop() != '(':
                break
            current_group += char
        else:
            stack = []
            groups.append(current_group + char)
            current_group = ''
    
    return [group for group in (current_group + ''.join(stack),) if group]