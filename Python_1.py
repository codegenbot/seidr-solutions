```
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
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
                return []
            current_group += char
        else:
            while stack:
                current_group += stack.pop()
            result.append(current_group)
            current_group = ''
    
    if stack:
        for _ in range(stack.pop()):
            current_group += '('
        result.append(current_group)
    
    return [current + ')' for current in result]